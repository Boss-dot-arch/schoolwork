#include <iostream>
using namespace std;
int fab(int);
int main(){
    int n;
    cin>>n;
    cout<<fab(n)<<endl;
    return 0;
}
int fab(int y){
    if(y==1)
    return 0;
    else if(y==2)
    return 1;
    else return fab(y-1)+fab(y-2);
}