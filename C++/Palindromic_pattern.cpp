/*

Program to print palindromic pattern

        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main(){
int i,j,n;
cin >> n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<"  ";
    }
    int k=i;
    for(;j<=n;j++){
        cout<<k--<<" ";
    }
    k=2;
    for(;j<=n+i-1;j++){
        cout<<k++<<" ";
    }
    cout<<endl;
}


}
