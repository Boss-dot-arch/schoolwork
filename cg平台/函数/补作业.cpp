#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

// 对数字进行变换：降序排列 - 升序排列
int transform(int num) {
    string s = to_string(num);
    
    // 根据数字的实际位数进行处理，不固定为4位
    string a = s, b = s;
    sort(a.begin(), a.end(), greater<char>());
    sort(b.begin(), b.end());
    
    int num_a = stoi(a);
    int num_b = stoi(b);
    
    return num_a - num_b;
}

int main() {
    int n;
    cin >> n;
    
    if (n == 0) {
        return 0;
    }
    
    vector<int> sequence;
    unordered_set<int> seen;
    
    sequence.push_back(n);
    seen.insert(n);
    
    // 模拟变换过程，直到出现循环
    while (true) {
        int next = transform(sequence.back());
        
        // 检查是否出现循环
        if (seen.count(next)) {
            sequence.push_back(next);
            break;
        }
        
        sequence.push_back(next);
        seen.insert(next);
        
        // 安全限制，避免无限循环
        if (sequence.size() > 1000) {
            break;
        }
    }
    
    // 输出序列
    for (int i = 0; i < sequence.size(); i++) {
        cout << sequence[i];
        if (i < sequence.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}