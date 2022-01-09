#include<iostream>
using namespace std;

int main(){
    int age; 
    cout<<"Tell me your age buddy:\n";
    cin>>age;
    


    switch (age)
    {
    case 20:
        cout<<"Your age is 20 You get 20 chocolates";
        break;
    case 2:
        cout<<"Your age is 2 . So call your mom baby";
        break;
    case 31:
        cout<<"Your age is 31 You get 2 oreo biscuits";
        break;
    
    default:
    cout<<"No offers for you buddy try again next year";
        break;
    }

    cout<<"\n Thank you for participating into the contest";


    return 0;
}