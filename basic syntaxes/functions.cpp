#include<iostream>
using namespace std;



// Function protopying 
// It says to complier that the function given inside main function ia available somewhere 
// and contains this much amount of arguments.

int simplify(int a ,int b,int c);
// or it can also be written as int simplify(int , int,int )

int main(){
    int num1,num2,num3;
    cout<<"Enter the first number \n";
    cin>>num1;
    cout<<"Enter the second number \n";
    cin>>num2;
    cout<<"Enter the third number \n";
    cin>>num3;


    cout<<"the result of these three number is "<< simplify(num1,num2,num3);



    
    return 0;
}
int simplify(int a , int b,int c){
    return a * b + c - a ;
}