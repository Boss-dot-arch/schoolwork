//输入一串数字，以“？”结尾，输出其中的字母个数和数字个数
#include <iostream>
using namespace std;
int main(){
    int nl=0,ng=0;//nl是字母计数器，ng是数字的计数器
    char ch;
    cin.get(ch);//获取字符（包括回车空格等），并写入变量ch
    while(ch!='?')
    {
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
        nl++;
        else {if(ch>='0'&&ch<='9')
        ng++;
        }//else后面只跟一个if而不继续else是可以的，这表示“如果不是A,再看看是不是B，如果不是B，那就什么也不做
        cin.get(ch);//接收后续字符，活循环
    }
    cout<<"\nnl="<<nl<<" ng="<<ng<<'\n';
    
}