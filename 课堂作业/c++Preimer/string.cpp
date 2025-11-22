#include <iostream>
#include <string>
using namespace std;
/*int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;

}*/
/*int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()>s2.size()){
        cout<<s1<<endl;
    }
    else{
        cout<<s2<<endl;
    }

}*/
int main(){
    string s1,s;
    while(cin>>s1){
        s+=s1+" ";
    }
    cout<<s<<endl;
    return 0;
}