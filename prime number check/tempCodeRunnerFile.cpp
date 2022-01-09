#include<iostream>
using namespace std;
int sum(int n){
    int sumn=0;
    for(int i=1;i<=n;i++){
        sumn+=i;

    }
    return sumn;

}

int main(){
    int n;
    cin>>n;

    int ans = sum(n);


    cout<<ans;



    
    return 0;
}