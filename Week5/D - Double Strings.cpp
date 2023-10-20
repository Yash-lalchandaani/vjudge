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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, nOfStrings;
    string sj, sk;
    map<string, bool> mp;

    cin>>t;

    while(t--) {
        cin>>nOfStrings;
        string str[nOfStrings];
        int ans[nOfStrings];
        
        for (int i = 0; i < nOfStrings; i++) {
            cin>>str[i];
            mp[str[i]] = true;
        }
        
        for (int i = 0; i < nOfStrings; i++) {
            ans[i] = 0;
            for (int j = 1; j < str[i].length(); j++) {
                sj = str[i].substr(0, j);
                sk = str[i].substr(j, str[i].length() - j);
                if (mp[sj] && mp[sk]){
                    ans[i] = 1;
                }
            }
        }

        for (int i = 0; i < nOfStrings; i++) {
            cout<<ans[i];
        }
        cout<<"\n";
        mp.clear();
    }

    return 0;
}