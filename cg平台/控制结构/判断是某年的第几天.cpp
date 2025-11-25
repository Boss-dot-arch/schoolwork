#include <iostream>
using namespace std;
int main(){
   int year,month,day,day0;
   cin>>year>>month>>day;
   int i=1,sum=0;
   while(i<month)
   {
    switch(i)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        day0=31;break;
        case 4:case 6:case 9:case 11:
        day0=30;break;
        case 2:
        if(year%4==0&&year%100!=0||year%400==0)
        day0=29;
        else day0=28;

        
    }
    sum+=day0;
    i++;
   } 

   sum+=day;
   cout<<sum<<endl;
   return 0;
}