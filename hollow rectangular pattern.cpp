/******************************************************************************
                           HOLLOW RECTANGULAR PATTERN
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
       for(int j = 1; j<=m; j++) {
           if(i==1||i==n||j==1||j==m) {
               cout<<"*";
            }
            else{
                cout<<" ";
            }
           
       }
       cout<<endl;
   }
}
