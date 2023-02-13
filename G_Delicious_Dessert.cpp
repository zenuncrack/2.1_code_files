#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> substrings;
    for (int i = 0; i < n; i++) {
        for (int j = 1; i + j <= n; j++) {
            substrings[s.substr(i, j)]++;
        }
    }
    long long delicious = 0;
    for (auto it : substrings) {
        if (it.second % it.first.length() == 0) {
            delicious += it.second;
        }
    }
    cout << delicious << endl;
    return 0;
}
