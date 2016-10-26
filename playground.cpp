//
//  playground.cpp
//  xcodeProjs
//
//  Created by Chris Whiting on 9/19/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//
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

void playground_code()
{
//typedef typename-
typedef int int_32;
//int_32 x = 5;
//std::cout << x+1 << '\n';
//typedef type------------------------- name-
typedef enum { red=20, green, blue, hi } Color;
//Color b = static_cast<Color>(3);  //type casts the int 3 to type "color" and forces it with "static_cast"
//Color c = red;
//std::cout << b+1 << '\n';
//std::cout << c << '\n';
std::string data;

/*size_t writeCallback(char *ptr, size_t size, size_t nmemb, void *userdata)
{
    for (int c=0; c<size*nmemb; c++)
    {
        data.push_back(buf[c]);
    }
    return size*nmemb;
};*/
    
//CURLcode res;
//CURL *curl;
/*struct curl_slist *list = NULL;
curl = curl_easy_init();
if(curl)
{
    curl_easy_setopt(curl, CURLOPT_URL, "user@10.139.88.43");
  //  list = curl_slist_append(list, "Content-Type: application/x-www-form-urlencoded");
 //   list = curl_slist_append(list, "Authorization: Bearer ffc65942bd830f2cf8867a57a8e548e3-c269c756a553957fc32c985e7f0e02d6");
  //  list = curl_slist_append(list, "Accept-Encoding: gzip, deflate");
  //  curl_easy_setopt(curl, CURLOPT_HTTPHEADER, list);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);//For redirection, if any
    
  //  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &writeCallback);
   // curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);
    
    res = curl_easy_perform(curl);
    if (res != CURLE_OK)
    {
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
    }
    curl_easy_cleanup(curl);
}
//std::cout << res;*/
}
