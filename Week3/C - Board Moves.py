'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

for i in range(int(input())):
    n=int(input())
    a=n//2
    q=0
    while(a>=1):
        q+=a*(2*a-1)
        a-=1
    q*=4

    p=0
    a=n//2
    while(a>=1):
        p+=a
        a-=1
    p*=4

    print(q+p)