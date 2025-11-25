//设整型变量a、b、c、d分别存放从键盘输入的4个整数。编写C++程序，按从大到小排列这4个数，
//使a成为最大值，d成为最小值，并且按序输出这4个数。
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,z;
    cin>>a>>b>>c>>d;
    if((b>a)&&(b>c)&&(b>d))//必须是交换值而不是单方面的赋值
    {z=b;b=a;a=z;}//赋值交换语句错误！（z1=a;a=z1;b=a)
    if((c>a)&&(c>b)&&(c>d))
    {z=c;;c=a;a=z;}
    if((d>a)&&(d>b)&&(d>c))
    {z=d;d=a;a=z;}
    cout<<a<<" ";
    if((c>b)&&(c>d))
    {z=c;c=b;b=z;}
    if((d>b)&&(d>c))
    {z=d;d=b;b=z;}
    cout<<b<<" ";
    if(c<d)
    {z=c;c=d;d=z;}
    cout<<c<<" "<<d<<endl;
    
    return 0;



}//1)算法；首先使a成为最大值。依次将a与b、c、d进行比较，若a小于它们，则交换它们的值。

//2)使b成为第二大值。依次将b与c、d进行比较，若b小于它们，则交换它们的值。

//3)使c成为第三大值。将c与d进行比较，若c小于d，则交换它们的值。

//按序输出a,b,c,d。

