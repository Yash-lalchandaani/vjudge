'''
Author: Yash Lalchandani(QY)
Connect on : WhatsApp Link: https://bit.ly/3RVznxY
Connect on : LinkedIn Link: https://bit.ly/3QbjTEt
Connect on : Instagram Link: https://bit.ly/46I0kcl
Connect on : Snapchat Link: https://bit.ly/3Qcv3ZM
Date: October 10, 2023
Description: This is a Simple Python Progranm
'''

def longest_unique_sequence(n, songs):
    # Initialize variables
    max_length = 0
    song_set = set()
    start = 0

    for end in range(n):
        while songs[end] in song_set:
            song_set.remove(songs[start])
            start += 1
        song_set.add(songs[end])
        max_length = max(max_length, end - start + 1)

    return max_length

# Input
n = int(input())
songs = list(map(int, input().split()))

# Calculate and print the result
result = longest_unique_sequence(n, songs)
print(result)
