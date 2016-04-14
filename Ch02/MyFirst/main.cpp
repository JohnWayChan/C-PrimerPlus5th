/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年4月12日, 下午9:18
 */

#include <cstdlib>
#include <iostream> //让程序使用C++的标准输入输出
#include <cmath>


/*
 * 
 */
int main(int argc, char** argv) {
    using namespace std; //名称空间
    //2.1
    //using std::cout;
    //using std::endl;
    //std::cout << "Hello World" << std::endl;
    
    double area;
    cout << "Enter the floor area, in square feet,of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
            << " feet to the side."  << endl;
    
    return 0;
}

