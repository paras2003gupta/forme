// DECIMAL TO BINARY CONVERTER
#include <iostream>
using namespace std;



int main() {
    int n;
cin>>n;
int ans = 0;
int power = 1;
    while(n>0) {
        int pd = n%2;
        ans = ans + power*pd;
        power = power*10;
        n = n/2;
    }
    cout<<ans<<endl;
    
}
