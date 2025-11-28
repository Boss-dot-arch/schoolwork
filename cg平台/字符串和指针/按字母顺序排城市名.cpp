#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i!=n;i++){
        string ne;
        cin>>ne;
        v.push_back(ne);
    }
    for(int j=0;j!=n;j++){
        for(int i=0;i!=n-j-1;i++){
            string s;
            if(int(v[i][0])>int(v[i+1][0])){
                s=v[i];
                v[i]=v[i+1];
                v[i+1]=s;
            }
        }
    }
    for(auto &c:v){
        cout<<c<<endl;
    }
    return 0;    
}
