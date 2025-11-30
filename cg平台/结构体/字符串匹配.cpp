#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int num=0;
    size_t i;
    for(i=0;i!=s.size();i++){
        bool ismatch=true;
        for(size_t j=0;j!=t.size();j++){
            if(s[i+j]!=t[j]){
                ismatch=false;
                break;
            }
        }
        if(ismatch){
            num=i+1;
            cout<<"find at "<<num<<endl;
            break;
        }
       
    }
    if(i==s.size()){
        cout<<"can't find"<<endl;
    }
    return 0;
    
}