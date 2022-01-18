#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = (n+1)/2;


    for(int i=1 ; i<=n;i++){
        for(int j=1 ; j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<a;
            }
            else if (i==2 || i==n-1 || j==2 || j==n-1){
                cout<<a-1;
            }
            else if (i==3 || i==n-2 || j==3 || j==n-2){
                cout<<a-2;
            }
            else{
                cout<<a-3;
            }
        }
        cout<<endl;
        
    }
    return 0;
}