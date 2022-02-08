m =int(input())
c=0
for i in range(1000000):
    n=i
    c=0
    x=1
    f=1
    while x<=i:
        f=f*x
        x=x+1
    for i in range(m):
        d = f%10
        if d==0:
            c=c+1
        f=f//10
    if c==m:
        break
print(n)