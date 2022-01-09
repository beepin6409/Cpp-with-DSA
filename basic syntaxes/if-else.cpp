#include<iostream>
using namespace std;

int main() {
    int age;

    cout<<"This is about checking your age whether you are eligible or not \n";
    cout<<"Tell me your age:"<<endl;
    cin>>age;

    if(age<18){
        cout<<"Since your age is less than 18 You cannot do these things"<<endl;

    }
    else if(age==18){
        cout<<"Since your age is exactly 18 You have to bring the signature of your parents \n";

    }
    else{
        cout<<"You are 18 above SO you can do whatever you like \n";
    }
    return 0;
}
