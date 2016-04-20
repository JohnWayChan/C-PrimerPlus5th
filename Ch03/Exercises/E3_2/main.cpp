/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on April 20, 2016, 1:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
 * 計算BMI 體重指數 
 */

float bmi(float,float);
/**
 * 身高轉換為國際單位
 * @param 
 * @param 
 * @return 
 */
float heightInMeters(float,float);
/**
 * 體重轉換為國際單位
 * @param 
 * @return 
 */
float weightInKilo(float);

int main(int argc, char** argv) {

     float heightFt;
     float heightIn;
     float weightPo;
     float heightMe;
     float weightKi;
     float BMI;
     
    cout << "Enter your height in feet: ";
    cin >> heightFt;
    cout << "Enter your height in inches: ";
    cin >> heightIn;
    cout << "Enter your weight in pound: ";
    cin >> weightPo;
    
 
    heightMe = heightInMeters(heightFt,heightIn);
    cout << "heightMe: " << heightMe << endl;
   
    weightKi = weightInKilo(weightPo);
    cout << "weightKi: " << weightKi << endl;
    
    BMI = bmi(heightMe,weightKi);
    cout << "The BMI is: " << BMI;
    
    return 0;
}

float heightInMeters(float heightFt, float heightIn){
    
    float heightMe;
    const float inchesPerFoot = 12;
    const float meterPerInch = 0.0254; 
    heightMe = (heightFt * inchesPerFoot + heightIn) * meterPerInch;
    return heightMe;
}

float weightInKilo(float weightPo){
    float weightKi;
    const float poundPerKi = 2.2;
    weightKi = weightPo / poundPerKi;
    return weightKi;
  
}

float bmi(float heightMe,float weightKi){

    float bmi;
    bmi = weightKi/pow(heightMe,2);
    return bmi;
}


