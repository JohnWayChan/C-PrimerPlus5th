/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月13日, 下午3:25
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void func_1();
void func_2();

int main(int argc, char** argv) {

    for(int i = 2;i>0;i-- ){
        func_1();
    }
    
    for(int i = 2;i>0;i-- ){
        func_2();
    }
    
    return 0;
}

void func_1(){
    cout << "Three blind mice" << endl;
}

void func_2(){
    cout << "See how they run" << endl;
}

