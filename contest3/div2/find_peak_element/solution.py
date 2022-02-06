n = int(input())
inp=str(input())
ls=inp.split(" ")
list1=[]
index=7
for i in ls:
    list1.append(int(i))
for i in range(0,len(list1)-1):
    if i==0:
        if list1[i]>=list1[i+1]:
            index=i
            break
    if i==len(list1)-1:
        if list1[i]>=list1[i-1]:
            index=i
            break
    if list1[i]>=list1[i-1] and list1[i]>=list1[i+1]:
        index=i
        break
print("Index of Peak:",index)