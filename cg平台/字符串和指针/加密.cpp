#include <iostream>
#include <string>
using namespace std;
string secret(string s){
    string n;
    for(auto &c:s){
        if(c>='A'&&c<='W'){
            n.push_back(char(c+3));
        }
        else if(c>'W'&&c<='Z'){
            n.push_back(char((c+3)-26));
        }
        else if(c>='a'&&c<='w'){
            n.push_back(char(c+3));
        }
        else if(c>'w'&&c<='z'){
            n.push_back(char((c+3)-26));
        }
        else{
            n.push_back(c);
        }

        
    }
    return n;
}
int main(){
    string str;
    getline(cin,str);
    cout<<secret(str)<<endl;
    return 0;
}