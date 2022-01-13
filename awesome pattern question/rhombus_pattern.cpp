#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    /***
    
    for(int i=1 ; i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if ((n-i)<j && j<=(2*n-i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    ***/
    


    
    /*Alternative Method*/
    
    for (int a=1;a<=n;a++){
        for(int b=1; b<=n-a;b++){
            cout<<" ";

        }
        for(int c=1;c<=n ;c++){
            cout<<"*";
        }
        cout<<endl;

    }
    
    
    
    return 0;
}
