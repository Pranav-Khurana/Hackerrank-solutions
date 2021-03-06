#https://hackerrank-challenge-pdfs.s3.amazonaws.com/22564-drawing-book-English?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1562476932&Signature=AFiscbKrKVrp1B0E6TAlTDCsbVY%3D&response-content-disposition=inline%3B%20filename%3Ddrawing-book-English.pdf&response-content-type=application%2Fpdf
#!/bin/python3

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    sp=[0,1]
    spc=0
    lp=[]
    lpc=0
    if n%2==0:
        lp=[n,0]
    else:
        lp=[n-1,n]
    while (p not in sp) and (p not in lp):
        spc+=1
        lpc+=1
        sp[0]+=2
        sp[1]+=2
        lp[0]-=2
        lp[1]=lp[0]+1
    if lpc>spc:
        return lpc
    else:
        return spc



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
