//
//  playground.hpp
//  xcodeProjs
//
//  Created by Chris Whiting on 9/19/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//

#ifndef playground_hpp
#define playground_hpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <string>
#include <iomanip>
#include "universe_of_things.hpp"
#include "atm.hpp"
#include "snape_and_ladder.hpp"
#include <curl/curl.h>
#include "playground.hpp"

void playground_code();
size_t writeCallback(char* buf, size_t size, size_t nmemb, void* up);

#endif /* playground_hpp */
