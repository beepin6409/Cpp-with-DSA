#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    int i,a;
    cin>>rows;
    cin>>columns;

    for (i=1;i<=rows;i++){
        for (a=1;a<=columns;a++){
            cout<<"*\t";

        }
        cout<<endl;



    }

    for (i=1; i<=rows;i++){
        for (a=1; a<=columns;a++){
            if (i==1 || i==rows || a==1 || a==columns){
                cout<<"*\t";
            }
            else{
                cout<<" \t";

            }
           

            
            
        }
         cout<<endl;
         
    }
    return 0;
}
