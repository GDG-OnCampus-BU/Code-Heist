# Question 1 (name yet to change)

A list of numeric values is given containing both real and complex numbers.

Sort the numbers based on their absolute values. The absolute value of a complex number `a+bj` is `(a^2+b^2)^0.51`. Create a function sort to solve the above mentioned problem.

## Sample Case

### Input

```py
[2+4j,6+5j,-5,7,3,-9+9j,8]
```

> For negative real numbers only the absolute value is taken into consideration, i,e, between `-7` and `4`, `-7` is greator.

### Output

```py
[3, (2+4j), -5, 7, (6+5j), 8, (-9+9j)]
```

## Test Cases

### Test case 1

#### Input

```py
[1+9j,2+3j,-4,2,9,-3+4j,5]
```

#### Output

```py
[2, (2+3j), -4, (-3+4j), 5, 9, (1+9j)]
```

### Test Case 2

#### Input

```py
[4,-1,0,5,-2-4j,1-1j,1+3j,10+0j]
```

#### Output

```py
[0, -1, (1-1j), (1+3j), 4, (-2-4j), 5, (10+0j)]
```
