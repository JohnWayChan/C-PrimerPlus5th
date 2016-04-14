/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月14日, 下午1:22
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 *  Display time
 */

void displayTime(int,int);

int main(int argc, char** argv) {

    int hours;
    int minutes;
    
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayTime(hours,minutes);
    return 0;
}

void displayTime(int hours,int minutes){
    
    cout << "Time: " << hours << ":" << minutes << endl;

}


