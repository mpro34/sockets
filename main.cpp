//
//  main.cpp
//  xcodeProjs
//
//  Created by Chris Whiting on 9/14/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>
#include "universe_of_things.hpp"
#include "atm.hpp"
#include "snape_and_ladder.hpp"
#include "playground.hpp"
#include "servant.hpp"
#include "onlineR.hpp"

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, const char * argv[]) {

    //wait_for_fortytwo(); // codechef #1
    //performTransaction(); // codechef #2
   // ladderSize(); // codechef #3
    std::cout << "hello, world!";
   // runServant(); // codechef #4
  //  playground_code();
  /*  std::string input;
    std::ifstream file;
    file.open("test1.txt");
    if (file.is_open()) {
        parseFile(file);
    }
    file.close();
    return 0;*/
    
   /* int getaddrinfo(const char *node,     // e.g. "www.example.com" or IP
                    const char *service,  // e.g. "http" or port number
                    const struct addrinfo *hints,
                    struct addrinfo **res); */
  /*  int status;
    struct addrinfo hints, *res;
    int sockfd, returnVal;
    
    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;

    //servinfo now points to a linked list of 1 or more stuct addrinfos.
    if ((status = getaddrinfo("www.google.com", "80", &hints, &res)) != 0) {
        fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
        exit(1);
    }
    
    sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    
    returnVal = connect(sockfd, res->ai_addr, res->ai_addrlen);
    
    std::cout << returnVal;
   // freeaddrinfo(servinfo);*/
    int x = createSock();
    char buf[255];
    std::cout << x;
    beginTalking(x);
  //  say_out(x, "Is this oscar?!");
    read_in(x, buf, sizeof(buf));
    if (strncasecmp("hello", buf, 5))
        say_out(x, "Hello Chris, Welcome to the Knock server!\r\n");
    else {
        say_out(x, "Not recognized command!\r\n");
    }
    
    return 0;
}
