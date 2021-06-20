/* 

 Inverted half pyramid using *
 
* * * * *
* * * *
* * * 
* *
*

*/

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}


/*Another way of writing code for inverted half pyramid 
just put j < = n+1-i
*/
#include <iostream>
using namespace std;

int main(){
    int i,j,n;
cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
cout << "*";
        }
        cout << endl;
    }
}

/*
output ==> 

5
*****
****
***
**
*

*/
