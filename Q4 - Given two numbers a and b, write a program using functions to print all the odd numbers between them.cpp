/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void printodd(int num1,int num2) {
    
    for(int i = num1;i<=num2;i++) {
        if(i%2!=0) {
            cout<<i<<" ";
        }
        
        
    }
    
}

int main()
{ 
    int num1,num2;
    cout<<"Enter the starting number"<<endl;
    cin>>num1;
    cout<<"Enter the ending number"<<endl;
    cin>>num2;
    
    printodd(num1,num2);
    return 0;
    
    
}
