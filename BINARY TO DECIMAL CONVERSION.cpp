/******************************************************************************

                  BINARY TO DECIMAL CONVERSION

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the binary number"<<endl;
    cin>>n;
    int p;
    int power = 1;
    int sum = 0;
    while(n>0) {  
         p = n%10;
        
        sum+=p*power;
        power*=2;
        n/=10;
        
    }
    cout<<"Number is "<<sum<<endl;
}

