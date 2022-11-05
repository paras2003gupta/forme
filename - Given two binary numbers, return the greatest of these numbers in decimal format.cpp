#include <iostream>
using namespace std;
int main() {
int num1,num2;
int sum = 0;
int power = 1;
int k;

cout<<"Enter the first binary number"<<endl;
cin>>num1;
cout<<"Enter the second binary number"<<endl;
cin>>num2;

if(num1>num2) {
    k = num1;
}
else {
    k = num2;
}
while(k>0) {
    int p = k%10;
    sum = sum + power*p;
    power = power*2;
    k = k/10;
    
    
    
}
cout<<"NUMBER IS "<<sum<<endl;
}


