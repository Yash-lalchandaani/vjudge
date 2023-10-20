'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

def minimum_total_cost(n, lengths):
    # Sort the lengths
    lengths.sort()
    
    # Calculate the median length
    median = lengths[n // 2]
    
    # Calculate the minimum total cost
    total_cost = 0
    for length in lengths:
        total_cost += abs(length - median)
    
    return total_cost

# Read input
n = int(input())
lengths = list(map(int, input().split()))

# Calculate and print the minimum total cost
result = minimum_total_cost(n, lengths)
print(result)