#include <iostream>
using namespace std;
int fact(int);
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;

}
int fact(int x){
    if(x==1) return 1;
    else return x*x*x+fact(x-1);

}
