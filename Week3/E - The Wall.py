'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

import math

# Function to calculate the number of common bricks between a and b for x and y
def common_bricks(x, y, a, b):
    lcm = (x * y) // math.gcd(x, y)
    
    # Calculate the number of common bricks within [1, b]
    common_up_to_b = b // lcm

    # Calculate the number of common bricks within [1, a-1]
    common_up_to_a_minus_1 = (a - 1) // lcm
    
    return common_up_to_b - common_up_to_a_minus_1

# Read input
x, y, a, b = map(int, input().split())

# Calculate and print the result
result = common_bricks(x, y, a, b)
print(result)