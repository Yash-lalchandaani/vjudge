'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 21, 2023
Description: This is a Simple C++ Progranm
'''

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    map<int, ll> hash;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int mask = 0;
        for (char ch : s)
        {
            int pos = ch - 'a';
            mask ^= (1 << pos);
        }
        hash[mask]++;
    }
    ll ans = 0;
    for (auto x : hash)
    {
        int mask = x.first;
        ll cnt = x.second;
        ans += (cnt * (cnt - 1)) / 2;
        int copy = mask;
        while (copy > 0)
        {
            int bit = copy & -copy;
            int need = mask ^ bit;
            ans += (hash[need] * cnt);
            copy -= bit;
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--)
        solve();
    return 0;
}