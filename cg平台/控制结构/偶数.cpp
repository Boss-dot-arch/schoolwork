#include <iostream>
using namespace std;
int main(){
    int m,i,j,k,count;
    cin>>m;
    count=0;
    for(i=1;i<=m;i++)
    {
        for(j=0;j<=m;j++)//(j=0;j<=m&&j!=i;j++)跳过有效组合
        {   if(j==i)
            continue;
            for(k=0;k<=m;k++)
            {    if(k==i||k==j)
                continue;
                if((i*100+j*10+k)%2==0)
                count++;

            }
        }
    }
cout<<count<<endl;
return 0;


}