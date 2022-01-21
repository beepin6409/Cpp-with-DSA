#include<iostream>
using namespace std;

int binarysearch(int array[],int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;
        if (array[mid]==key){
            return mid;

        }
        else if(array[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;

        }


    }
    
    return -1;

}
int main(){

    int n;
    cout<<"Enter the size of an array :";
    cin>>n;

    int array[n];
    cout<<"Enter the elements of an array";


    for ( int i=0; i<n;i++){
        cin>>array[i];

    } 
    int key;
    cout<<"Enter the key that you wanted to search :";
    cin>>key;

    cout<<binarysearch(array,n,key);


    
    return 0;
}