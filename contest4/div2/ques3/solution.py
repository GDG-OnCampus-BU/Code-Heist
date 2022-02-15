def find_max_sum(arr):
    sum_inc = 0   
    sum_exc = 0
    
    for i in arr:
         
        if sum_exc > sum_inc:
            new_sum = sum_exc 
        else:
            new_sum = sum_inc
        
        sum_inc = sum_exc + i
        sum_exc = new_sum

    if sum_exc > sum_inc:
        return sum_exc 
    else:
        return sum_inc

n = int(input())
arr = list(map(int,input().split()))
print (find_max_sum(arr))
