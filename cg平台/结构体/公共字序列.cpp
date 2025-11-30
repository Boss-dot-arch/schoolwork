#include <iostream>
#include <string>
using namespace std;
bool is_match(string a,string b){
    size_t i;
    for(i=0;i<a.size();i++){
        bool ismatch=true;
        for(size_t j=0;j<b.size();j++){
            if(a[i+j]!=b[j]){
                ismatch=false;
                break;
            }
        }
        if(ismatch){
            return true;
            //break; return 已经退出循环，函数结束执行
        }
    }
    if(i==a.size()){
        return false;
    }
}
int main(){
    string s1,s2,t;
    cin>>s1>>s2>>t;
    if(is_match(s1,t)&&is_match(s2,t)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;

}