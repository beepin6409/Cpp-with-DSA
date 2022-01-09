#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <=4; i++)
    {
        cout<<i<<"\t";
        if (i==2)
        {
            break;
        }
        
    }

    for (int a = 10; a <=15; a++)
    {
        if (a==12)
        {
            continue;
        }
        cout<<a<<"\t";
        
    }
    

    return 0;
}