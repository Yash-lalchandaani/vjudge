'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

def count_subarrays_with_divisible_sum(n, arr):
    prefix_sum = 0
    remainder_count = [0] * n
    total_count = 0
    
    # Initialize the count of subarrays with remainder 0 to 1 (empty subarray)
    remainder_count[0] = 1
    
    for num in arr:
        prefix_sum = (prefix_sum + num) % n
        # If prefix_sum is negative, add n to make it non-negative
        if prefix_sum < 0:
            prefix_sum += n
        total_count += remainder_count[prefix_sum]
        remainder_count[prefix_sum] += 1
    
    return total_count

# Input
n = int(input())
arr = list(map(int, input().split()))

# Calculate and print the number of subarrays
result = count_subarrays_with_divisible_sum(n, arr)
print(result)