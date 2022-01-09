#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i-j+1;
        }
        for(int j=1 ; j<=i-1;j++){
            cout<<j+1;
        }
        cout<<endl;
    }

    
    return 0;
}