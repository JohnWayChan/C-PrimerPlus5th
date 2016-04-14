/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月13日, 下午11:42
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 摄氏转华氏温度
 */

float celsiusConvertFahrenheit(float);

int main(int argc, char** argv) {
    
    float cels;
    cout << "Please enter a Celsius value: ";
    cin >> cels;
    cout << cels << " degress Celsius is " << celsiusConvertFahrenheit(cels)
            << " degrees Fahrenhiet" << endl;
    return 0;
}

float celsiusConvertFahrenheit(float cels){
    float fahr;
    
    fahr = 1.8 * cels + 32.0;
    
    return fahr; 
}

