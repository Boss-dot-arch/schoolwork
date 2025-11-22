#include <iostream>
using namespace std;

void to_binary(int x) {
    if (x == 0) return;
    to_binary(x / 2);
    cout << x % 2;
}//逆序运用递归本身的性质

int main() {
    int x;
    cin >> x;
    to_binary(x);
    return 0;
}