test = int(input())
for i in range(test):
    n = int(input())
    ans = 0
    arr = list(map(int,input().split()))
    for i in range(2*n+1):
        ans = arr[i]^ans
    print(ans)


