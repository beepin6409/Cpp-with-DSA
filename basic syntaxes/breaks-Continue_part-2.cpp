#include<bits/stdc++.h>
using namespace std;

/* printing numbers that are not divisible by 2 and 3 between 1 to 100 */

int main(){
    
   
    /***
    int n=100;

    for( int i=0; i<=100 ; i++){
        if(i%3 == 0 || i%2 ==0)
        {
            continue;
        }
    
        cout<<i<<endl;

    }
    ***/

    int pocketmoney = 5000;
    for(int i=1 ; i<= 30 ; i++){
        pocketmoney-=1000;
        if(pocketmoney != 0)
        {
            continue;
            
        }
        cout<<"you cannot go out on day "<<i+1<<endl;


    }


    
    return 0;
}