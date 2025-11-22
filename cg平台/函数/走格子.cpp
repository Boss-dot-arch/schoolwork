#include <iostream>
using namespace std;
int ans = 0;

void dfs(int x, int y,int n, int m){
   if(x == n && y == m) {
       ++ans;
   }
   if(x + 1 <= n) {
      dfs(x+1, y,n,m);
   }
   if(y + 1 <= m) {
     dfs(x, y+1,n,m);
   }
}

int main() {
    int n,m;
    cin >> n >> m;
   dfs(1,1,n,m);
   cout << ans << endl;
   return 0;}