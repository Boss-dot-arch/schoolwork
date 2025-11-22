#include <iostream>
#include <vector>
using namespace std;
int main(){
    for(int abc=123;abc<=329;abc++){
        int def=2*abc;
        int ghi=3*abc;
        int arr[9]={0};
        int temp=abc;
        for(int i=0;i!=3;i++){
            arr[(temp%10)-1]++;
            temp/=10;
        }
        temp=def;
        for(int j=0;j!=3;j++){
            arr[(temp%10)-1]++;
            temp/=10;
        }
        temp=ghi;
        for(int k=0;k!=3;k++){
            arr[(temp%10)-1]++;
            temp/=10;
        }
        bool used=false;
        for(auto &c:arr){
            if(c!=1){
                used=true;
                break;//没有1就标记并且退出
            }
        }
        if(!used){
            cout<<abc<<" "<<def<<" "<<ghi<<endl;
        }
    }
    return 0;
}
   