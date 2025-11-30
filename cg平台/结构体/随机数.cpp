#include <iostream>
using namespace std;
int main(){
    int seed,b,c,m;
    cin>>seed>>b>>c>>m;
    int arr[5]={seed};
    for(int i=1;i<5;i++){
        arr[i]=(b*arr[i-1]+c)%m;
    }
    for(int i=0;i<5;i++){
        cout<<"a"<<i<<"  "<<arr[i]<<endl;
    }
    return 0;
}