#include <iostream>
using namespace std;
int way(int);
int main(){
    int n;
    cin>>n;
    cout<<way(n-1)+way(n-2)<<endl;
}
int way(int x){
    if(x==1||x==2){
        return 1;
    }
    else{
        return way(x-1)+way(x-2);
    }
    return 0;
}