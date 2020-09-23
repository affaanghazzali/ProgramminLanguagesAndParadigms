//
//  main.cpp
//  BasicDataTypes
//
//  Created by Affaan Ghazzali on 9/23/20.
//  Copyright © 2020 Affaan Ghazzali. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


// Square Root Calculator for PROBLEM 10 (line 117)
double sqrtCalc(double x) {
    double result = x / 2.0;
    double temp = 0;
    while(result != temp) {
        temp = result;
        result = (x / temp + temp) / 2;
    }
    
    return result;
}

int main(int argc, const char * argv[]) {
    
    {
        // PROBLEM 1
        cout<<"PROBLEM 1\n";
        unsigned int a = UINT_MAX;
        unsigned int b = 23;
        unsigned int result = a + b;
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"a + b = "<<result<<endl;
        cout<<result<<" is less than "<<a<<"\n"<<endl;
    }
    
    {
        // PROBLEM 2
        cout<<"PROBLEM 2\n";
        int a = INT_MAX;
        int b = 23;
        int result = a + b;
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"a + b = "<<result<<endl;
        cout<<result<<" is less than 0"<<"\n"<<endl;
    }
    
    {
        // PROBLEM 3
        cout<<"PROBLEM 3\n";
        int a = INT_MIN;
        int b = -23;
        int result = a + b;
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"a + b = "<<result<<endl;
        cout<<result<<" is greater than 0"<<"\n"<<endl;
    }
    
    {
        // PROBLEM 4
        cout<<"PROBLEM 4\n";
        double x = 0.00000006;
        double result = x + 1.0;
        cout<<"x = "<<x<<endl<<"x is greater than 0"<<endl<<"But still, x + 1.0 == "<<result<<" is "<<"True"<<"\n"<<endl;
    }
    
    {
        //Problem 5
        cout<<"PROBLEM 5\n";
        double a = 1;
        double b = 1e20;
        double c = -1e20;
        
        double result1 = (a+b)+c;
        double result2 = (c+b)+a;
        
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl<<"(a+b) + c = "<<result1<<endl<<"(c+b) + a = "<<result2<<endl;
        cout<<"And "<<result1<<" != "<<result2<<"\n"<<endl;
    }
    
    {
        //Problem 6
        cout<<"PROBLEM 6\n";
        cout<<"pow(-2.,3) = "<<pow(-2,3)<<endl;
        cout<<"pow(-2.,3.0) = "<<pow(-2,3.0)<<endl;
        cout<<"pow(-2., 3.00000000001) = "<<pow(-2., 3.00000000001)<<"\n"<<endl;
    }
    
    {
        //Problem 7
        cout<<"PROBLEM 7\n";
        cout<<"The memory size of (double) 1.0 = "<<sizeof(1.0)<<endl;
        cout<<"The memory size of (float) 1.0F = "<<sizeof(1.F)<<endl;
        cout<<"The memory size of (int) 1 = "<<sizeof(1)<<endl;
        cout<<"The memory size of (char) '1' = "<<sizeof('1')<<endl;
        cout<<"The memory size of (string) \"1\" = "<<sizeof("1")<<"\n"<<endl;
    }
    
    {
        //Problem 8
        cout<<"PROBLEM 8\n";
        cout<<"The INCORRECT value of 1.0 / 3.0 with 20 digits of precision = "<<setprecision(20)<<1.0/3.0<<endl;
        cout<<"To get the CORRECT value of 1.0 / 3.0 we can only use 16 digits of precision because that is the capacity of the double data type\n";
        cout<<"The CORRECT value, therefore, is 1.0 / 3.0 = "<<setprecision(16)<<1.0/3.0<<"\n"<<endl;
    }
    
    {
        //Problem 9
        cout<<"Problem 9\n";
        for(int i=32,j=64,k=96;i<=63&&j<=95&&k<=127;i++,j++,k++) {
            cout<<i<<" "<<(char)i<<"\t"<<j<<" "<<(char)j<<"\t"<<k<<" "<<(char)k<<endl;
        }
        cout<<"\n";
    }
    
    {
        //Problem 10
        cout<<"Problem 10\n";
        cout<<"The Square Root of 2 = "<<sqrtCalc(2.0)<<"\n"<<endl;
    }
    
    return 0;
}
