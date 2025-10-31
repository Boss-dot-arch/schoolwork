#include <iostream>
using namespace std;
int main(){
    int i,n,sum;
   
    for(i=2;i<=1000;i++)

    {
        sum=1;//变量初始化在内层
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            sum+=n;

            }
        if(sum==i)
        cout<<i<<" ";

    }
    return 0;
}