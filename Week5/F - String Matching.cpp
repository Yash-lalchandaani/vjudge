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

namespace str {
/** Computes the Pi array of s. */
vector<int> pi(const string &s) {
	int n = (int)s.size();
	vector<int> pi_s(n);
	for (int i = 1, j = 0; i < n; i++) {
		while (j > 0 && s[j] != s[i]) { j = pi_s[j - 1]; }
		if (s[i] == s[j]) { j++; }
		pi_s[i] = j;
	}
	return pi_s;
}
}  // namespace str

int main() {
	string P, T;
	cin >> T >> P;
	string S = P + '#' + T;
	vector<int> pi = str::pi(S);
	int ans = 0;
	for (int l : pi) {
		if (l == P.size()) { ans++; }
	}
	cout << ans << '\n';
}