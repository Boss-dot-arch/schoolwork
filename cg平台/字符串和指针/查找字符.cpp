#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool found=false;
    int i=0;
    for(;i!=s.size()-1;i++){
        if(s[i]=='s'){
            found=true;
            break;
        }
    }
    if(found){
        cout<<i<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}