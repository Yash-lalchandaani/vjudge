'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 21, 2023
Description: This is a Simple C++ Progranm
'''

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
int a[1000001];
void solve()
{
    string s;
    cin >> s;
    int res1 = 0;
    int res2 = 1;

    int b = 0;

    for(int i=0;i<s.length();++i)
    {
        if (s[i] == '(')
        {
            ++b;
            a[b] = i + 1;
        }
        else
        {
            --b;
            if (b >= 0)
            {
                int len = i + 1 - a[b];
                if (res1 < len)
                    res1 = len, res2 = 0;
                if (res1 == len)
                    ++res2;
            }
            else
            {
                b = 0;
                a[0] = i + 1;
            }
        }
    }

    cout << res1 << " " << res2 << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}