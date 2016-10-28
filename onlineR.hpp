//
//  onlineR.hpp
//  xcodeProjs
//
//  Created by Chris Whiting on 10/25/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//

#ifndef onlineR_hpp
#define onlineR_hpp

#include <stdio.h>

int createSock();
void beginTalking(int connection_id);
int read_in(int socket, char *b, int l);
int say_out(int socket, char *s);


#endif /* onlineR_hpp */
