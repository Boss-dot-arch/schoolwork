#include <iostream>
using namespace std;
int main(){
    int head,feet;
    cin>>head>>feet;
    cout<<"rabbit="<<(feet/2-head)<<","<<"chicken="<<(2*head-feet/2);
    return 0;
}