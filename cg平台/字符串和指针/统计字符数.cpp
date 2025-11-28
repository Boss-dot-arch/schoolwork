#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int arr[26]={0};
    for(auto &c:str){
        if(c>='A'&&c<='Z'){
            arr[int(c)-65]++;
        }
        if(c>='a'&&c<='z'){
            arr[int(c)-97]++;
        }
    }
    char x='A';
    for(int i=0;i!=26;i++){
        cout<<x<<":"<<arr[i]<<",";
        x+=1;
        if((i>0)&&((i+1)%10==0)){
            cout<<endl;
        }
    }
    return 0;
}