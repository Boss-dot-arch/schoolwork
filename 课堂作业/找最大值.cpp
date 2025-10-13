#include <iostream>
using namespace std;
int main(){
    int a,b,c,max;
    cout<<"a="<<endl;
    cin>>a;
    cout<<"b="<<endl;
    cin>>b;
    cout<<"c="<<endl;
    cin>>c;
    if(a>b) max=a;
    else max=b;
    if(c>max) {cout<<"max="<<c<<endl;}
    cout<<"max="<<max<<endl;//不加else必执行该语句
    return 0;
}