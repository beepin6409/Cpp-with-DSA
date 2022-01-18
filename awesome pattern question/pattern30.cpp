#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(i>=j){
                cout<<j;

            }
            else{
                cout<<" ";
            }
        }
        for(int k=1;k<=i;k++){
            if(k>1){
                cout<<k;
            }
        }
        cout<<endl;

    }
    
    return 0;
}