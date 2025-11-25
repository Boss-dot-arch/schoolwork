#include <iostream>
using namespace std;
int main(){
    char x;
    cout<<"请输入字符："<<endl;
    cin>>x;
    if(x>=97)
    cout<<x<<endl;//注意if else结构的分号用在哪里
    else cout<<char(x+32)<<endl;//需要强制转化为char型
}


#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>='A')&&(ch<='Z'))
    cout<<char(ch+32)<<endl;//ch+=32;
    else cout<<ch<<endl;//cout<<ch<<endl;//一个if的分支结构
}