'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

def is_fair(num):
    original_num = num
    while num > 0:
        digit = num % 10
        if digit != 0 and original_num % digit != 0:
            return False
        num //= 10
    return True

def find_minimum_fair_integer(n):
    x = n
    while True:
        if is_fair(x):
            return x
        x += 1

# Read the number of test cases
t = int(input())

# Iterate through the test cases
for _ in range(t):
    n = int(input())
    result = find_minimum_fair_integer(n)
    print(result)