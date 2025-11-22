#include <iostream>
#include <vector>
using namespace std;
double average(vector<int> v){//vector后加包含元素的内置类型
    double sum=0.0;
    for(auto &c:v){
        sum+=c;
    }
    return sum/(v.size());
}  
int main(){
    vector<int> vec;
    int n,x;
    cin>>n;
    while(cin>>x){
        vec.push_back(x);
    }
    cout<<average(vec);
    return 0;

}