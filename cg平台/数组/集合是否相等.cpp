#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n1=0;
    cin>>n1;
    int x=0;
    vector<int> v1;
    while(cin>>x){
         bool found=false;
        if(v1.size()>=1){
            for(int i=0;i!=v1.size()-1;i++){
                if(v1[i]==x){
                    found=true;
                    break;
                }    
            }
        }
        if(!found){
            v1.push_back(x);
        }
        else continue;
    }
    int n2=0;
    cin>>n2;
    int y=0;
    vector<int> v2;
    while(cin>>y){
         bool found=false;
        if(v2.size()>=1){
            for(int j=1;j!=v1.size()-1;j++){
                if(v2[j]==y){
                    found=true;
                    break;
                }    
            }
        }
        if(!found){
            v2.push_back(y);
        }
        else continue;
    }
    bool equal=false;
    for(auto &c:v1){
        for(auto &b:v2){
            if(c==b){
                equal=true;
                break;
            }
        }
        if(!equal){
            cout<<"no"<<endl;
            break;
        }
    }
    if(equal){
        cout<<"yes"<<endl;
    }
    return 0;

}