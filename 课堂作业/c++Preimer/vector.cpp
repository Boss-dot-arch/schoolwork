#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
/*int main(){
    vector<int> v;
    int x;
    while(cin>>x)
    v.push_back(x);
    return 0;

}*/
/*int main(){
    char ch;
    vector<char> v;
    while(cin>>ch)
    {v.push_back(ch);}
    int i;
    for(i=0;i<v.size();i++)
    cout<<(char)toupper(v[i]);//toupper·µ»Øint
    return 0; 

}*/
/*int main(){
    int x,i;
    vector<int> v;
    while(cin>>x)
    {
        v.push_back(x);
    }
    for(i=0;i<v.size()-1;i++)
        cout<<v[i]+v[i+1]<<endl;
    return 0;
}*/
int main(){
    int x,i;
    vector<int> v;
    while(cin>>x){
        v.push_back(x);
    }
    if(v.size()%2==0){
        for(i=0;i!=(v.size()/2)+1;i++)
            cout<<v[i]+v[v.size()-1-i]<<endl;
    }
    else{
       for(i=0;i!=(v.size()/2)+1;i++){
            cout<<v[i]+v[v.size()-1-i]<<endl;
        }
       cout<<v[v.size()/2]<<endl;
    }
    return 0;
}