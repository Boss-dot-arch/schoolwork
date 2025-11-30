#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double arr[1000]={0};
    double h=100;
    for(int i=0;i<1000;i++){
        arr[i]=h;
        h/=2;
    }
    cout<<arr[n]<<endl;
    return 0;
}