/*

Program to print butterfly pattern
for n = 4

*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/


#include <iostream>
using namespace std;

int main(){
    int i,j,row,col,n;
   
cin>>n;
int count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){ 
           cout<<"* ";
    }
    int space = 2*n -2*i;
    for(int j=1;j<=space;j++){
        cout<< "  ";
    }
        for(int j=1;j<=i;j++){
        cout<< "* ";
    }
    cout<< endl;}

     for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){ 
           cout<<"* ";
    }
    int space = 2*n -2*i;
    for(int j=1;j<=space;j++){
        cout<< "  ";
    }
        for(int j=1;j<=i;j++){
        cout<< "* ";
    }
    cout<< endl;}
}

