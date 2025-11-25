#include <iostream>
using namespace std;
int main(){
    int y,m,d,days;
    cin>>y>>m>>d;
    if((y%4==0&&y%100!=0||y%400==0)&&(m==2)&&(d==29))
    cout<<"-1"<<endl;
    else if(y%4==2)
    cout<<"6575"<<endl;
    else cout<<"6574"<<endl;
    return 0;
}