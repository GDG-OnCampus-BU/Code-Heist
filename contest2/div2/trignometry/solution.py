import math

def f(x):
    return (
        2 * math.tan(x) +
        3 * math.cos(x ** 2) +
        19 * math.sin(x)
    )

x = eval(input())
print('%.2f' % f(x))
