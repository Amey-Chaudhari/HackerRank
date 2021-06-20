/* 
Program to make a 0-1 pattern triangle
cin == 6

1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1

*/


#include <iostream>
using namespace std;

int main(){
    int i,j,row,col,n;
   
cin>>n;
int count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){ 
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
           
        }
        cout << endl;
    }
    return 0;
}
