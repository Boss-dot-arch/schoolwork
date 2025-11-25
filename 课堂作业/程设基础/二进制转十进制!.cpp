#include <iostream>
using namespace std;
int main(){
    int i,sum;
    char ch;
    do{
        cin.get(ch);
        sum+=int(ch);//强制转换成了字符的ASCII码值，而非阿拉伯数字
        sum+=int(ch)*2;

    }
    while(ch!='0'&&ch!='1');
    cout<<sum<<endl;
    return 0;

}

//标准
#include <iostream>
using namespace std;
int main(){
    int Dec=0;
    char ch;
    cout<<"Brinary=";
    do{
        cin.get(ch);
    }while(ch!='0'&&ch!='1');//略去前导字符，直至ch存放一个合法数字
    do
    {
        Dec+=ch-'0';//把字符转化为数字。相当于字符的ASCII码值-48
        if(ch=='0'||ch=='1')//多余
        Dec*=2;}while(ch=='0'||ch=='1');
    cout<<"Decimal="<<Dec<<'\n';

}