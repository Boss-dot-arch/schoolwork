#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    vector<int> A, B;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        A.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        B.push_back(x);
    }
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    sort(B.begin(), B.end());
    B.erase(unique(B.begin(), B.end()), B.end());

    if (A.size() != B.size()) {
        cout << "no" << endl;
        return 0;
    } else {
        for (size_t i = 0; i < A.size(); ++i) {
            if (A[i] != B[i]) {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
}