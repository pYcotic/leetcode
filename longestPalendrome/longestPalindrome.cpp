#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";
    int maxLen = 1;
    int start = 0;
    bool dp[n][n];
    fill(&dp[0][0], &dp[0][0] + n * n, false);
    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
        for (int j = 0; j < i; ++j) {
            dp[j][i] = (s[i] == s[j] && (i - j < 2 || dp[j + 1][i - 1]));
            if (dp[j][i] && maxLen < (i - j + 1)) {
                maxLen = i - j + 1;
                start = j;
            }
        }
    }
    return s.substr(start, maxLen);
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s) << endl;
    return 0;
}
