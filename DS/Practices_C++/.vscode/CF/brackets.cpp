#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canBreak(const string& s) {
    int n = s.length();
    int balance = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance == 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        if (canBreak(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}