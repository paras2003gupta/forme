/******************************************************************************
                           INCREASING TRIANGULAR PATTERN
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int n,m;
    cout<<"enter the rows which u wanna print"<<endl;
    cin>>n;
    cout<<"enter the column which u wanna print"<<endl;
    cin>>m;
    
   for(int i = 1 ; i<=n;i++) {
       for(int j = 1; j<=i; j++) {
           cout<<"*";
       }
       cout<<endl;
   }
}
