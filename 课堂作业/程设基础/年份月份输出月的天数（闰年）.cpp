#include <iostream>
using namespace std;
int main(){
   int x,y,Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dce;
   cout<<"请输入年份月份:"<<endl;
   cin>>x>>y;
   switch(x%4==0)//赋值和等于符号！！！
   {
    case 1:Feb=29;break;
    case 0:Feb=28;
   }
   


}


#include <iostream>
using namespace std;
int main(){
   int year,month,days;
   cout<<"year=";
   cin>>year;
   cout<<"month=";
   cin>>month;
   switch(month)
   {
      case 1:case 3:case 5:case 7:case 8:case 10:case 12://等价于换行写
      days=31;break;
      case 4:case 6:case 9:case 11:
      days=30;break;
      case 2:if((year%4==0)&&(year%100!=0)||(year%400==0))//能被4整除但不能被100整除，或者能被400整除的年份为闰年
      days=29;
      else days=28;//case中嵌套一个if语句//case 2:days=((year%4==0)&&(year%100!=0)||(year%400==0))?29:28;

   }
   cout<<"days="<<days<<endl;
}