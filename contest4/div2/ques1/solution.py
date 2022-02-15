def sort(a):
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if(abs(a[i])>abs(a[j])):
                temp=a[i]
                a[i]=a[j]
                a[j]=temp
    print(a)
sort(eval(input()))
