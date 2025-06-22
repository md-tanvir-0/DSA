#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canBreak(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            for (int j = 0; j < n; j++) {
                if (s[j] == ')' && i != j) {                   
                    string remaining = "";
                    for (int k = 0; k < n; k++) {
                        if (k != i && k != j) {
                            remaining += s[k];
                        }
                    }
                    int balance = 0;
                    bool isInvalid = false;
                    
                    for (char c : remaining) {
                        if (c == '(') {
                            balance++;
                        } else {
                            balance--;
                            if (balance < 0) {
                                isInvalid = true;
                                break;
                            }
                        }
                    }
                    if (isInvalid || balance != 0) {
                        return true;
                    }
                }
            }
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        if (canBreak(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}