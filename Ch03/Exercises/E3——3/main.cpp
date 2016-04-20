/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on April 20, 2016, 9:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *  Enter a latitude in degrees,minutes,and seconds.
 *  Then display the latitude in decimal format of degrees. 
 */
float convert(float,float,float);

int main(int argc, char** argv) {
    int degrees;
    int minutes;
    int seconds;
    
    cout << "Enter a latitude in degress,minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next,enter the minutes  of arc: ";
    cin >> minutes;
    cout << "Finally,enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << 
            " seconds = " << convert(degrees, minutes,seconds) << " degrees" <<
            endl;
    return 0;
}

float convert(float degrees, float minutes, float seconds){
    float result;
    int minute_per_degree =  60;
    int second_per_degree = 3600;
 
    result = degrees + minutes/minute_per_degree + seconds/second_per_degree;
    
    return result;
}

