/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月14日, 下午5:31
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 1英寸(in)=0.0833333英尺(ft)  
 * 
 * factor = 0.083
 * 
 * 1,asks for user's height in integer inches;
 * 2,converts the height to feet and inches.
 * 
 * 
 * 
 */

void convert();

int main(int argc, char** argv) {

    convert();
    return 0;
}

void convert(){
    
    cout << "Please enter your hight in integer inches:__\b\b";
    int code;
    cin >> code;
    cout << "Your code is " << code << endl;
    
}
