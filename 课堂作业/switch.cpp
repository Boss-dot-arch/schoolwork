#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"x=";
    cin>>x;
    switch(x)
    {
        case 1:cout<<"one ";break;
        case 2:cout<<"two  \t";
        case 3:cout<<"three \n";
        default:cout<<"other\t ";
    }
    cout<<"end"<<endl;
}