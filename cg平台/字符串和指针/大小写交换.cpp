#include <iostream>
#include <string>
using namespace std;
char change(char x){
    if(x<91){
        return char(x+32);
    }
    else{
        return char(x-32);
    }
}
int main(){
    string str;
    getline(cin,str);
    for(auto &c:str){
        if(!isspace(c)&&c>='A'&&c<='z'){
            c=change(c);
        }
    }
    cout<<str<<endl;
    return 0;
}