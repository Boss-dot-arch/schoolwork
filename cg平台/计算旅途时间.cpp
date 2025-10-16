#include <iostream>
using namespace std;
int main(){
    int start,end,min1,min2,min3,min,hour;
    cin>>start>>end;
    if(start%100!=0)
    min1=(start/100)*60+start%100;
    else
    min1=(start/100)*60;
    if(end%100!=0)
    min2=(end/100)*60+end%100;
    else
    min2=(end/100)*60;//注意时间的表示
    min3=min2-min1;
    hour=min3/60;
    min=min3%60;
    cout<<hour<<" hrs "<<min<<" mins";
    return 0;



}