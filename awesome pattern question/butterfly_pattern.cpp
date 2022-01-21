#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        for(int j=1; j<2*n-1;j++){
            if(i>=j || i>2*n-2-j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1 ;j<2*n-1;j++)
        {
            if(i>=j ||i>2*n-2-j )
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}