//
//  atm.cpp
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
#include "atm.hpp"
using namespace std;

void performTransaction() {
    float balance = 0.00;
    float withdraw_amount = 0.00;
    float service_charge = 0.50;
    char line[128];
    while(cin.getline(line,128)) {
    //Extract Withdraw Value
        int space_index = 0;
        for (int i=0; i<5; i++) {
            if (line[i] == ' ') {
                space_index = i;
            };
        };
        sscanf(line, "%f", &withdraw_amount);
    
        char *newline = new char[128-space_index];
    //Extract Balance Value
        for (int j=0; j<7; j++) {
            if (line[space_index+j+1] == ' ') {
                break;
            }
            else {
                newline[j] = line[space_index+j];
            };
        };
        sscanf(newline,"%f",&balance);
        if (balance >= 0.00 && balance <= 2000.00 && withdraw_amount > 0.00 && withdraw_amount <= 2000.00) {
            if (((int)withdraw_amount%5 == 0) && withdraw_amount <= balance) {
                float f = balance - withdraw_amount - service_charge;
                cout << setprecision(2);
                cout << fixed << f << '\n';
            }
            else {
                cout << setprecision(2);
                cout << fixed << balance << '\n';
            };
        };
    };
};