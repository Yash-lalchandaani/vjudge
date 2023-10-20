'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

t=int(input())
while t:
    t-=1
    n,m=map(int,input().split())
    ans=n
    k=1
    while n>0 and n%10==0:
        n//=10
    while n>0 and n%5==0:
        n//=5
        if k*2<=m:
            k*=2
        else:
            break
    while n>0 and n%2==0:
        n//=2
        if k*5<=m:
            k*=5
        else:
            break
    while k*10<=m:
        k*=10
    k=(m//k)*k
    print(ans*k)