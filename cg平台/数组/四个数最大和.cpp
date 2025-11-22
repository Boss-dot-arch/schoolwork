#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    while(cin>>x){
        if(x==-1){
            break;
        }
        v.push_back(x);
    }
    int max=0;
    int i0=0;
    if(v.size()<4){
        cout<<"invalid input";
    }
    else{
    for(int i=0;i!=v.size()-3;i++){
        if(v[i]+v[i+1]+v[i+2]+v[i+3]>max){
            max=v[i]+v[i+1]+v[i+2]+v[i+3];
            i0=i;
        }
    }
    if(v[v.size()-3]+v[v.size()-2]+v[v.size()-1]+v[0]>max){
        max=v[v.size()-3]+v[v.size()-2]+v[v.size()-1]+v[0];
        i0=v.size()-3;
    }
    if(v[v.size()-2]+v[v.size()-1]+v[0]+v[1]>max){
        max=v[v.size()-2]+v[v.size()-1]+v[0]+v[1];
        i0=v.size()-2;
    }
    if(v[v.size()-1]+v[0]+v[1]+v[2]>max){
        max=v[v.size()-1]+v[0]+v[1]+v[2];
        i0=v.size()-1;
    }
    cout<<i0+1<<" "<<max<<endl;
    return 0;
    }
    
}