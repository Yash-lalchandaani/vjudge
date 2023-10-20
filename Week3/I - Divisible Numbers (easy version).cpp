// Author: Yash Lalchandani(QY)
// Connect on : WhatsApp Link: https://bit.ly/3RVznxY
// Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
// Connect on : Instagram Link: https://bit.ly/46I0kcl
// Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
// Date: October 10, 2023
// Description: This is a simple C++ program.

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int gcd(LL a, LL b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    LL k = 1ll * a * b;
    for (int i = a + 1; i <= c; i++) {    // Enumeration X
        LL t = k / gcd(k, i);    //  T | y, t is the factor of y
        if ((b / t + 1) * t <= d) {    //  The smallest T larger than B does not exceed D
            printf("%d %d\n", i, d / t * t);
            return;
        }
    }
    printf("-1 -1\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }

    return 0;
}