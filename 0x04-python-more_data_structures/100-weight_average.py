#!/usr/bin/python3

def weight_average(my_list=[]):
    if not my_list:
        return 0

    top = 0
    down = 0

    for x in my_list:
        top += x[0] * x[1]
        down += x[1]

    return (top / down)
