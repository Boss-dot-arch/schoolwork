#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    size_t length;
    for(length=1;length<str.size();length++){
        bool found=false;//每次循环初始化
        if(str.size()%length==0){
            for(size_t i=0;i<str.size();i++){
                if(str[i]!=str[i%length]){
                    found=true;
                    break;
                }
            }
                if(!found){
                    break;
                }//必须在if语句里，前提条件为能够被整除
        }
        
    }
    cout<<length<<endl;//此时不为length，因为直接break并没有执行加一操作
    return 0;
}