#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arm=0;
    int original_n=n;
    while(n>0){
        int lastdigit=n%10;
        // arm = arm + lastdigit*lastdigit*lastdigit;
        //this above can also be written as
        arm+= pow(lastdigit,3);
        n=n/10;


    }


    cout<<arm<<endl;

    if (original_n==arm){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }

    
    return 0;
}