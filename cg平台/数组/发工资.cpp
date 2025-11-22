#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[6]={100,50,10,5,2,1};
    int n;
    cin>>n;
    int x=0;
    vector<int> salary;
    while(cin>>x){
        salary.push_back(x);
    }
    int cnt=0;
    for(auto &c:salary){
        for(auto &b:arr){
            cnt+=c/b;
            c%=b;
        }
    }
    cout<<cnt<<endl;
    return 0;
}