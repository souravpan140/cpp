
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap="<<a<<" "<<b;
    return 0;
}