#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,i,sum,pi;
    sum=0;
    i=1;
    do{
        x=1/(i*i);
        sum+=x;
        i++;
    }
    while(
        fabs(x)>=(1e-12));//do while 结构当表达式为假时跳出循环；
        pi=sqrt(6*sum);
        cout<<pi<<endl;
        return 0;

}