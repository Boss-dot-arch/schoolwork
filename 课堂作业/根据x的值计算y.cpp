#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cout<<"x="<<endl;
    cin>>x;
    switch(x)
    {
     case 1:cout<<(3*x-5);break;
     case 2:
     case 3:cout<<(2*cos(x)+1);break;
     case 4:
     case 5:cout<<(sqrt(1+x*x));break;
     default:cout<<(x*x-4*x+5);}
    

}

//exemple
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cout<<"x=";
    cin>>x;
    switch(int(x))//强制转化为整型表达式，使得x可取小数
    {
        case 1:y=3*x-5;break;
        case 2:
        case 3:y=2*cos(x)+1;break;
        case 4:
        case 5:y=sqrt(1+x*x);break;
        default:y=x*x-4*x+5;}
    cout<<"y="<<y<<endl;//最后cout最终的y值，减少重复
    }
        
            