#include <iostream>
using namespace std;

    int value(int x)
    {
        int y;
        if(x<5)
        y=x;
        else if(x<15&&x>=5)
        y=x+6;
        else if(x>=15)
        y=x-6;
        return y;
    }
    int main(){
        int m;
        cin>>m;
        if(m<0)
        cout<<"illegal input"<<endl;
        else cout<<value(m)<<endl;
        return 0;
    }

