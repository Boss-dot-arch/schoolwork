#include <iostream>
using namespace std;
int main(){
    int i,n,sum;
    sum=0;
    for(i=1;i<51;n=2*i-1)//Ìõ¼þÎ»ÖÃ´íÎó
    {
        sum+=n;
        i++;

    }
    cout<<"sum="<<sum<<endl;
    return 0;
}