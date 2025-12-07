#include <iostream>
using namespace std;
int arr[12][12];
int main(){
    const int dy[4]={0,-1,0,1};
    const int dx[4]={1,0,-1,0};//4种移动方式
    int n;
    cin>>n;
    int x=1,y=n;//当前填数的位置
    int now=1;
    arr[1][n]=1;
    int nowtype=0;//当前的方向
    const int tot=n*n;
    while(now<tot){//循环结束条件为填满
        int xx=x+dx[nowtype];
        int yy=y+dy[nowtype];//一次变换后的位置坐标
        if(xx>n||yy>n||xx<=0||yy<=0||arr[xx][yy]){
            nowtype=(nowtype+1)%4;
        }
        else{
            x=xx;
            y=yy;
            arr[x][y]=++now;
        }

    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}