#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char max=s[0];
    for(size_t i=1;i!=s.size();i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    /*for(size_t i=0;i!=s.size();i++){      从前往后遍历，新插入的max会产生影响
        if(s[i]==max){
           s.insert(i+1,"(max)"); 
        }
   }*/
   string n;
   for(size_t i=0;i!=s.size();i++){
        n.push_back(s[i]);
        if(s[i]==max){
            n+="(max)";
        }
        
    }
    cout<<n<<endl<<endl;
    return 0;
}