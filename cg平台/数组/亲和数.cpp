#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<int> v1;
    for(int i=1;i!=a;i++){
        if(a%i==0){
            v1.push_back(i);
        }
    }
    int sum1=0;
    for(auto &c:v1){
        sum1+=c;
    }
     vector<int> v2;
    for(int i=1;i!=b;i++){
        if(b%i==0){
            v2.push_back(i);
        }
    }
    int sum2=0;
    for(auto &c:v2){
        sum2+=c;
    }
    if(sum1==b&&sum2==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
