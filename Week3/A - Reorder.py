'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

def can_reorder_array(o, p, q):
    if sum(q) == p:
        return "YES"
    else:
        return "NO"

# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read input for each test case
    o, p = map(int, input().split())
    q = list(map(int, input().split()))

    # Check if it's possible to reorder the array
    result = can_reorder_array(o, p, q)
    print(result)