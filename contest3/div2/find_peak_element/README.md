# Find Peak Element

You have a list of integer elements and your task is to find a Peak element index from the list. A list element is a peak if it is NOT smaller than its neighbours. For corner elements, we need to consider only one neighbour. 
 
Note: You have to return the first peak element index if more than one peak elements are present in the list.

## Input

First line of inputs represent number of elements(n)
Second line of input represents n elements

## Output

Index of peak element as "Index of Peak: {index}"

## Sample Case

### Given Input

```py
4
5 10 20 15
```

### Output

```py
Index of Peak: 2
```

### Explanation

The element 20 has neighbours 10 and 15, both of them are less than 20.
 
### Input

```py
7
10 20 15 2 23 90 67
```

### Output

```py
Index of Peak: 1
```

### Explanation

The element 20 has neighbours 10 and 15, both of them are less than 20. Similarly 90 has neighbours 23 and 67. The list has two peak elements so you have to return the first peak (20) element index.
 

## Test Cases

### Case 0

```py
6
1 3 20 4 1 0
```

### Output

```py
Index of Peak: 2
```


### Case 1

```py
4
5 10 20 15
```

### Output

```py
Index of Peak: 2
```

### Case 2

```py
6
1 3 20 4 1 0
```

### Output

```py
Index of Peak: 2
```

### Case 3

```py
8
1 2 3 4 5 6 7 8
```

### Output

```py
Index of Peak: 7
```

### Case 4

```py
5
0 0 0 0 0
```

### Output

```py
Index of Peak: 0
```