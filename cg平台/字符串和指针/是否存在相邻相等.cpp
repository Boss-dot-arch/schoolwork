#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    bool found=false;
    for(int i=0;i!=s.size()-1;i++){
        if(s[i]==s[i+1]){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}