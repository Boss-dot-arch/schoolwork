//给定两个正整数，求最大公约数
/*
辗转相除法：
若m和n为两个正整数，则有：
当m>n，m与n的最大公约数等于n与m%n的最大公约数
当n=0,m与n的最大公约数等于m
*/
#include<iostream>
using namespace std;
int main(){
    int m,n,a,b,r;
    cout<<"input two integers:\n";
    cout<<"?";cin>>m;
    cout<<"?";cin>>n;
    if(m>n){
        a=m;b=n;}
        else {a=n;b=m;}
        r=b;
        while(r!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
cout<<m<<"and"<<n<<"maximal common divisor is:"<<a<<endl;

}