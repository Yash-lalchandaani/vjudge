'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 21, 2023
Description: This is a Simple C++ Progranm
'''

#include<bits/stdc++.h>
using namespace std;
int n;
char s[1000001],s1[1000001];
int p[1000001],len,p1[1000001];
int main(){
    int i;
    scanf("%s",s+1);
    n=strlen(s+1);
    int j=0;
    for(i=2;i<=n;i++){
        while(j&&s[i]!=s[j+1])j=p[j];
        if(s[i]==s[j+1])j++;
        p[i]=j;
    }
    int x=p[n],y=n-p[n]+1;
    for(i=2;i<=n-1;i++)if(p[i]==p[n])len=max(len,p[n]);
    for(i=y;i<=n;i++)s1[i-y+1]=s[i];
    j=0;
    for(i=2;i<=p[n];i++){
        while(j&&s1[i]!=s1[j+1])j=p1[j];
        if(s1[i]==s1[j+1])j++;
        p1[i]=j;
    }
    if(p1[p[n]])len=max(len,p1[p[n]]);
    if(len)for(i=1;i<=len;i++)putchar(s[i]);
    else puts("Just a legend");
    return 0;
}