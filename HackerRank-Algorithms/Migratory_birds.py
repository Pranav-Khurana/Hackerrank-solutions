#https://hackerrank-challenge-pdfs.s3.amazonaws.com/33294-migratory-birds-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1562477359&Signature=5IHlXiKCSht5%2BZvmAoIgoxiyv5Y%3D&response-content-disposition=inline%3B%20filename%3Dmigratory-birds-English.pdf&response-content-type=application%2Fpdf
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(ar):
    l=[0,0,0,0,0]
    v=0
    m=l[0]
    for i in ar:
        l[i-1]+=1
    for i in range(len(l)):
        if l[i]>m:
            m=l[i]
            v=i+1
    return v

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ar_count = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = migratoryBirds(ar)

    fptr.write(str(result) + '\n')

    fptr.close()
