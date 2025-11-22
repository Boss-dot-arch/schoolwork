#include <iostream>
using namespace std;
void digit(int x)
{
   if(x==0) return;
   cout<<x%10;
   digit(x/10);

}
int main(){
    int y;
    cin>>y;
    digit(y);
    return 0;
}