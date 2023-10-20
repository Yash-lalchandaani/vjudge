'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

# Function to calculate the k-th positive integer not divisible by n
def calculate_kth_non_divisible(t, test_cases):
    results = []
    for i in range(t):
        n, k = test_cases[i]
        result = k + (k - 1) // (n - 1)
        results.append(result)
    return results

# Input
t = int(input())
test_cases = []
for _ in range(t):
    n, k = map(int, input().split())
    test_cases.append((n, k))

# Calculate and print the results
results = calculate_kth_non_divisible(t, test_cases)
for result in results:
    print(result)