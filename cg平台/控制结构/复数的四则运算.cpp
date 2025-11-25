#include <iostream>
using namespace std;
int main(){
    double a,b,c,d,m,n;
    char op;
    cin>>a>>b>>op>>c>>d;
    switch(op)
    {case '+':m=a+c;n=b+d;cout<<m<<" "<<"+"<<" "<<n<<"i"<<endl;break;
    case '-':m=a-c;n=b-d;cout<<m<<" "<<"+"<<" "<<n<<"i"<<endl;break;
    case '*':m=a*c-b*d;n=a*d+b*c;cout<<m<<" "<<"+"<<" "<<n<<"i"<<endl;break;
    case '/':if((c==0)&&(d==0))
    cout<<"Divisor cannot be 0"<<endl;
    else
    {m=(a*c+b*d)/(c*c+d*d);
    n=(b*c-a*d)/(c*c+d*d);cout<<m<<" "<<"+"<<" "<<n<<"i"<<endl;}break;
    default:cout<<"error"<<endl;}
    
    return 0;



}