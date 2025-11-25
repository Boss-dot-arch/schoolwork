#include <iostream>
#include <string>
using namespace std;
string de(string s){
    string s2;
    for(auto &c:s){
        if(c!='T'){
            s2.push_back(c);
        }
    }
    return s2;
}
int main(){
    string str;
    cin>>str;
    cout<<de(str)<<endl;
    return 0;
}