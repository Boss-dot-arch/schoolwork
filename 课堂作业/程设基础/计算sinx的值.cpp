#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,term,sum;
    int n;
    cout<<"x=";
    cin>>x;
    n=1;
    sum=x;
    term=x;//当前项
    do{
        n+=2;
        term=term*(-x*x/((n-1)*n));//找规律递推求和
        sum+=term;
    }while(fabs(term)>=1e+8);
    cout<<sum<<endl;


}