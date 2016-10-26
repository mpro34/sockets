//
//  servant.cpp
//  xcodeProjs
//
//  Created by Chris Whiting on 9/19/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#include <iomanip>
#include "servant.hpp"

void runServant()
{
    int T; //1 <= T <= 1000
    int N; //-20 <= N <= 20
    std::cin >> T;
    if (T >= 1 && T <= 1000)
    {
        for (int i=0; i < T; i++)
        {
            std::cin >> N;
            if (N >= -20 && N <= 20 && N < 10)
            {
                std::cout << "What an obedient servant you are!" << '\n';
            }
            else
            {
                std::cout << -1 << '\n';
            }
        }
    }
}
             
