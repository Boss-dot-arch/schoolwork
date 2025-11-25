#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    cin>>c;
    switch(c==a*b)//赋值再错那你很聊掰了
    {
        case 1:cout<<"right";break;
        case 0:cout<<"error";
    }
    return 0;
    

}