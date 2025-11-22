#include <iostream>
using namespace std;
void su(int m){
    for(int i=2,j=2;i<=500;i++){
         while(i%j!=0)
          j++;
          
        if(j>i)
        {
            for(int n=i;n<=500;n++){
                int k=2;
                while(n%k!=0)
                  k++;
                if(k>n){
                    if(n+i==m){
                     cout<<n<<" "<<"+"<<" "<<i<<"="<<m<<endl;
                        }
                }
            }
        }


    }

    
}
int main(){
    int x;
    cin>>x;
    su(x);
    return 0;

}