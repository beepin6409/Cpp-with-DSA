#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    int a= 45;
    cout<<"The value of a was :"<<a<<endl;
    a=70;
    cout<<"Now the value of a is :"<<a<<endl;

    // Constants is C++
    const int b=70;
    cout<<"The value of a was :"<<b<<endl;

    // Manipulators in C++

    int x=20,y=340,z=234567;

    cout<<"The value of x is :"<<setw(6)<<x<<endl;  
    cout<<"The value of y is :"<<setw(6)<<y<<endl;  
    cout<<"The value of z is :"<<setw(6)<<z<<endl;  
    return 0;
}