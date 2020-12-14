#!/usr/bin/python3
from execute import check
res = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        mul = i * j
        if check(mul) and mul > res:
            res = mul
            print("{:d}".format(res))
