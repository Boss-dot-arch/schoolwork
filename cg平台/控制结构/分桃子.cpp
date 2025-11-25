#include <iostream>
using namespace std;
int main(){
    int i,n,j;
    for(i=1;;i++)

    {
        n=i;
        
        for(j=1;j<=5;j++)
        {
            if(n%5==1)
            n=n-1-n/5;
            else break;

        }
        if(j==6)
       { cout<<i<<endl;
        break;}


    }
    return 0;

}