#https://hackerrank-challenge-pdfs.s3.amazonaws.com/35155-the-birthday-bar-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1562406025&Signature=yOKV5G2hRwmWzYfqOeMdJvcMtns%3D&response-content-disposition=inline%3B%20filename%3Dthe-birthday-bar-English.pdf&response-content-type=application%2Fpdf
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s, d, m):
    c=0
    for i in range(len(s)-m+1):
        sum=0
        for j in range(m):
            sum+=s[i+j]
        if sum==d:
            c+=1
    return(c)



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = list(map(int, input().rstrip().split()))

    dm = input().split()

    d = int(dm[0])

    m = int(dm[1])

    result = solve(s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
