#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    string wrongLayout = "234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    string correctLayout = "1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,./";
    
    string result;
    for (char c : s) {
        if (c == ' ') {
            result += ' ';
        } else {
            size_t pos = wrongLayout.find(c);
            if (pos != string::npos) {
                result += correctLayout[pos];
            } else {
                result += c;
            }
        }
    }
    
    cout << result << endl;
    
    return 0;
}