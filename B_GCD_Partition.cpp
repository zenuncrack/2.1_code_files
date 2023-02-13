#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> dp(n, 0);
        dp[0] = a[0];
        for (int i = 1; i < n; i++) {
            dp[i] = gcd(dp[i - 1], a[i]);
        }
        int max_gcd = dp[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            max_gcd = max(max_gcd, gcd(dp[i], dp[n - 1] - dp[i]));
        }
        cout << max_gcd << endl;
    }
    return 0;
}
