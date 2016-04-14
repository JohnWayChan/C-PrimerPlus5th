/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月14日, 下午4:56
 */

#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl << endl;
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl;
    cout << "Minimum int value = " << INT_MIN << endl; cout << "Bits per byte = " << CHAR_BIT << endl;
    
    return 0;
}

