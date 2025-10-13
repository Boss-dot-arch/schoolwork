#include <iostream>
#include <cmath>//sqrt求根函数头文件
using namespace std;
int main(){
    double a,b,c,s,area;
    cout<<"请输入三角形三边长："<<endl;
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a))//用括号表示清楚，防止高低级运算
    {s=(a+b+c)/2.0;//2.0使结果可为浮点型
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"area="<<area<<endl;//输出该面积数，设置了area却没有用
    }
    else cout<<"这不是一个三角形"<<endl;
        
}