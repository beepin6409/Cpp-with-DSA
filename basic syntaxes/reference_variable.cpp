#include<iostream>
using namespace std;
int c=50;


int main() {
    /*

    int a,b,c;
    cout<<"The value of a is :";
    cin>> a;

    cout<<"The value of b is:";
    cin>> b;
    
    c=a+b;
    cout<<"C is the sum of a and b . So its {local} value is :"<<c<<endl;
    cout<<"But there is a global variable c also and its value is :"<<::c;
    

   float d=23.3f;
   long double e=34.4l;

   cout<<"The value of d and e are :"<<d<<" and "<<e <<"\trespectively\n";
   cout<<"The size of 23.3f is "<<sizeof(23.3f)<<endl;
   cout<<"The size of 23.3F is "<<sizeof(23.3F)<<endl;
   cout<<"The size of 23.3l is "<<sizeof(23.3l)<<endl;
   cout<<"The size of 23.3L is "<<sizeof(23.3L)<<endl;
   cout<<"The size of 23.3 is "<<sizeof(23.3)<<endl;
   */

  //Reference Variable 
  //int x=240;
  //int & y=x;
  //cout<<x<<endl<<y;

  // Typecasting

    int a=32;
    float b= 70.6;

    cout<<"Coverting a into float\t"<<float(a)<<endl;
    cout<<"Coverting b into int\t"<<int(b)<<endl;
    int c = int(b);
    cout<<c<<endl;

    cout<<a+b<<endl;
    cout<<a+(int)b<<endl;
    cout<<a+int(b)<<endl;



  






    return 0;
}
