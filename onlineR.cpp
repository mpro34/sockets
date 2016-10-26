//
//  onlineR.cpp
//  xcodeProjs
//
//  Created by Chris Whiting on 10/25/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//

#include "onlineR.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <string>
#include <iomanip>

//socket apis
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>


void beginTalking(int connection_id)
{
    char *msg = "Internet server\r\nVersion 1.0\r\nKnock!\r\n> ";
    if (send(connection_id, msg, (int)strlen(msg), 0) == -1)
    {
        std::cout << "Error in send";
    }
}

/* B.L.A.B = Bind to a port, Listen, Accept a connection, Begin talking */
int createSock()
{
    int listener_d = socket(PF_INET, SOCK_STREAM, 0); //listener_d is the descriptor.
    if (listener_d == -1)
    {
        std::cout << "Error in creating socket";
        //error("Can't open socket");
    }
    
//The following will prevent errors occurs when trying to bind to a port (b/c sticky ports).
    int reuse = 1;
    if (setsockopt(listener_d, SOL_SOCKET, SO_REUSEADDR, (char *)&reuse, sizeof(int)) == -1)
    {
        std::cout << "Can't set the reuse option on the socket";
    }
    
//BIND socket to port 30000
    struct sockaddr_in name;
    name.sin_family = PF_INET;
    name.sin_port = (in_port_t)htons(30000);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    int c = bind(listener_d, (struct sockaddr *) &name, sizeof(name));
    if (c == -1)
    {
        std::cout << "Error, can't bind to socket.";
    }
//LISTEN: If more than 10 clients try to connect, return an error.
    if (listen(listener_d, 10) == -1)
    {
        std::cout << "Can't Listen";
    }
    puts("Waiting for connection");
    
//Server will use connect_d to ACCEPT a connection and BEGIN Talking.
    while (1)
    {
    struct sockaddr_storage client_addr;    //Will store details about the client who's just connected.
    unsigned int address_size = sizeof(client_addr);

    int connect_d = accept(listener_d, (struct sockaddr *) &client_addr, &address_size);
    if (connect_d == -1)
    {
        std::cout << "Can't open 2nd socket for client connection!";
        return -1;
    }
        beginTalking(connect_d);
       // close(connect_d);
    }
    
    
    
    return 0;
}
