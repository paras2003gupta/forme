/* reverse the digit of an number like 2345____>>>_____5432*/
#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;
    int sum = 0;
    while(n>0) {
        int ld = n%10;
        n = n/10;
        sum = sum*10;
        sum = sum + ld;
        
        
    }
    cout<<"Reverse digit is "<<sum<<endl;
    
    

    
}
