n = int(input())
n1=n
for i in range(1,n+1):
    for j in range(1,n1):
        print(' ', end=' ')
    for k in range(n1,n+1):
        print('*',end= ' ')
    n1-=1
    print()