#include <iostream>
#include <string>
using namespace std;

bool isPossible(string s) {
    int ones = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            ones++;
        }
    }
    if (ones < 3) {
        return false;
    }
    if (ones == 3) {
        return true;
    }
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            count++;
        }
        if (count == 3) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (isPossible(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
