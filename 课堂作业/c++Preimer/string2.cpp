#include <iostream>
#include <string>
using namespace std;
/*int main(){
    string str("hello world");
    for(char &c:str)
    c='X';
    cout<<str<<endl;
    return 0;

}*/
int main(){
    string str;
    getline(cin,str);
    for(auto &c:str)
    if(!ispunct(c)){
    cout<<c;}
    return 0;
}