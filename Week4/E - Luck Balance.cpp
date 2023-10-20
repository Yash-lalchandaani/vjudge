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

int N, K;

int main()
{
    scanf("%d%d", &N, &K);
    vector<int> a;
    int ans=0;
    for(int i=0; i<N; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if(y)
            a.push_back(x), ans-=x;
        else
            ans+=x;
    }
    sort(a.rbegin(), a.rend());
    for(int i=0; i<K && i<(int)a.size(); i++)
        ans+=2*a[i];
    printf("%d\n", ans);
    return 0;
}