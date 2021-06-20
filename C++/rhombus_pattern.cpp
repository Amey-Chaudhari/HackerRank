/*

Program to print rhombus pattern 
cin ==> 5
    * * * * * 
   * * * * *
  * * * * *
 * * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main(){
    int i,j,row,col,n;
   
cin>>n;
int space=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){ 
          cout << " ";
        }
        for(j=1;j<=n;j++){
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}

