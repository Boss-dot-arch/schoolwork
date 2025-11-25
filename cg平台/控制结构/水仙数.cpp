#include <iostream>
using namespace std;
int main(){
    int x,x1,x2,x3;
    cin>>x;
    x1=x/100;
    x2=(x%100)/10;
    x3=x%10;
    if(x1*x1*x1+x2*x2*x2+x3*x3*x3==x)
    cout<<"yes";
    else
    cout<<"no";
    return 0;

}