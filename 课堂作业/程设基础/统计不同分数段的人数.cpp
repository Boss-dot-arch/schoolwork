#include <iostream>
using namespace std;
int main(){
    int grade,n1,n2,n3;
    cin>>grade;
    for(n1=0;(grade>=85)&&(grade<=100);)
    {n1+=1;
        cin>>grade;}
        for(n2=0;(grade>=60)&&(grade<=84);)
        {n2+=1;
        cin>>grade;}
        for(n3=0;(grade<60);)
        {
            n3+=1;
            cin>>grade;
        }
        cout<<n1<<n2<<n3<<endl;
        return 0;//三个for循环错误，顺序执行循环，可能会中途跳出所有循环。cin>>grade使得无法每次执行三个循环

}

#include <iostream>
using namespace std;
int main(){
    int i,n,n1,n2,n3;
    double score;
    cout<<"n=";
    cin>>n;
    n1=0;n2=0;n3=0;
    for(i)
}