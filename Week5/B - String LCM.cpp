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
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long m,n,i,j,k,l,p,q,r,lcm;
        string s1,s2,s3="",s4="";
        cin>>s1>>s2;
        p=s1.size();
        q=s2.size();
        r=__gcd(p,q);
        lcm=(p*q)/r;
        for(i=0;i<lcm/p;i++)
        {
            s3=s3+s1;
        }
        for(i=0;i<lcm/q;i++)
        {
            s4=s4+s2;
        }
        if(s3==s4)
        {
            cout<<s3<<endl;
        }
        else
            cout<<-1<<endl;
    }
}