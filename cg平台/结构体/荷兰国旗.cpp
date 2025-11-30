#include <iostream>
#include <string>
using namespace std;
int main(){
    string arr[3]={"Red","White","Blue"};
    int num[3]={0};
    string n;
    while(cin>>n){
        for(int i=0;i<3;i++){
            if(arr[i]==n){
                num[i]++;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=num[i];j>0;j--){
            cout<<arr[i]<<" ";
        }
    }
    return 0;

}