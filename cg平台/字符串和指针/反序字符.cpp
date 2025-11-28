#include <iostream>
#include <string>
using namespace std;
string reverse(string s){
    string n;
    for(int i=s.size()-1;i>=0;i--){
        n.push_back(s[i]);
    }
    return n;
}
int main(){
    string s1;
    cin>>s1;
    cout<<reverse(s1)<<endl;
    return 0;
}