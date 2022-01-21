#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for (int i=0; i<n;i++){
        cin>>array[i];


    }
    int max1=INT32_MIN;



    for (int i=0; i<n;i++){
        max1=max(max1,array[i]);

        cout<<max1<<endl;



    }

    cout<<max1;



    
    return 0;
}