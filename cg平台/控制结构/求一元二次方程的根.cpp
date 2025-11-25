#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {x1=x2=-b/(2*a);
    cout<<"has two equal roots:"<<endl;
    cout<<"x1=x2="<<x1;}
    else if (d>0)
    {x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout<<"has two real roots:"<<endl;
    cout<<"x1="<<x1<<","<<"x2="<<x2;}
    else if(d<0)
    {
        cout<<"has two complex roots:"<<endl;
        cout<<"x1="<<-b/(2*a)<<"+"<<sqrt(-d)/(2*a)<<"i"<<endl;
        cout<<"x2="<<-b/(2*a)<<"-"<<sqrt(-d)/(2*a)<<"i"<<endl;
    }
return 0;


}