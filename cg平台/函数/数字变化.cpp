#include <iostream>
using namespace std;
void cal_step(int n){
    int i;
    for(i=0;n>1;i++){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
        else{
            n=3*n+1;
            cout<<n<<" ";
        }
    }
    cout<<"\n"<<i;
}
int main(){
    int n;
    cin>>n;
    cal_step(n);
    return 0;
}