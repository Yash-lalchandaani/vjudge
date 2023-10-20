'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

def is_valid_division(arr, n, k, max_sum):
    subarrays = 1
    current_sum = 0

    for num in arr:
        current_sum += num
        if current_sum > max_sum:
            subarrays += 1
            current_sum = num

    return subarrays <= k

def find_minimum_max_sum(arr, n, k):
    left = max(arr)
    right = sum(arr)
    result = right

    while left <= right:
        mid = (left + right) // 2
        if is_valid_division(arr, n, k, mid):
            result = mid
            right = mid - 1
        else:
            left = mid + 1

    return result

# Input
n, k = map(int, input().split())
arr = list(map(int, input().split()))

# Calculate and print the maximum sum in a subarray in the optimal division
result = find_minimum_max_sum(arr, n, k)
print(result)