#include <iostream>
using namespace std;
int main(){
    int n,sum,x;
    cin>>n;
    sum=1;
    for(x=1;x<=n;)
    {sum*=x;
    x++;}//¸´ºÏÓï¾ä¼Ó»¨À¨ºÅ
    cout<<"n!="<<sum<<endl;
    return 0; 


}
