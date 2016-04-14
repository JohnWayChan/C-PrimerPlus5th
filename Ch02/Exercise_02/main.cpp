/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月13日, 下午3:10
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * Asks for a distance in furlongs and converts it to yards
 */

//int fulongsConvertsToYards(int);

int main(int argc, char** argv) {

    int furlongs = 0;
    int oneFurlongPerYards = 250;
    
    cout << "Enter furlongs: ";
    cin >> furlongs;
    cout << furlongs << " furlongs is " << furlongs * oneFurlongPerYards << 
            " yards."  << endl;
    
    return 0;
}

