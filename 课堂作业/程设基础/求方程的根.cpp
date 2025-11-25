#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,x1,x2;
    cout<<"输入系数"<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    if(fabs(a)<=1e-8)
    cout<<"不是一元二次方程"<<endl;
    else {
        d=b*b-4*a*c;//注意乘号的使用
        if(fabs(d<=1e-8))//fabs()绝对值函数
        cout<<"有两个相等的实根："<<-b/(2*a)<<endl;//运算先后
        else 
        if

    }
    

}