/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月13日, 下午11:53
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Converts light years what user enter to astronomical units. 
 */

double lyToAstr(double);

int main(int argc, char** argv) {
    double ly;
    cout << "Enter the number of light years: ";
    cin >> ly;
    cout << ly << " light years = " << lyToAstr(ly) << " astronomical units"
            << endl;
    return 0;
}

double lyToAstr(double ly){
    double astr;
    astr = ly * 63240;
    
    return astr;
}

