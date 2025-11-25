#include <iostream>
using namespace std;
int main(){
    int x,y,x1,x2,x3,x4;
    cin>>x;
    x1=((x/1000)+9)%10;
    x2=((x%1000)/100+9)%10;
    x3=((x%100)/10+9)%10;
    x4=((x%10)+9)%10;
    y=x3*1000+x4*100+x1*10+x2;
    cout<<y<<endl;
    return 0;
    
    
    

}