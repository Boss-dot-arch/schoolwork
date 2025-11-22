#include <iostream>
using namespace std;
int bei(int a,int b){
    while(b){
      int r=a%b;  
      a=b;
      b=r;
    }
    return a;//Õ·×ªÏà³ı·¨
}
int main(){
   int n;
   cin>>n;
   int x,y,z;
   cin>>x>>y>>z;
   int a=x*y/bei(x,y);
   int b=a*z/bei(a,z);
   cout<<b<<endl;
   return 0;
}