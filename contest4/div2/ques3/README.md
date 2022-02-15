# Question 3 (name yet to change)

You are a bank robber with a complex security system. There are `N` vaults in the bank, and you want to rob these vaults to get maximum money. But the security raises an alarm when any two adjacent vaults are robbed.

You are given the amount of money stored in `N` vaults; find the maximum amount of money you can possibly rob.

## Input

- First line of input represents the number of elements (`N`)
- Second line of input has `N` elements representing the individual money stored in the vaults

## Output

Maximum amount of money that the robber can rob from the bank

## Sample Case

### Input

```py
5
10 5 9 10 5
```

### Output

```py
24
```

### Explanation

The possible ways that you can rob without raising the alarm is:

```py
10 + 9 + 5 = 24
5 + 10 = 15
10 + 10 = 20
5 + 5 = 10
```

Therefore, the maximum amount that can be robbed = `24`

## Test Cases

### Test Case 1

#### Input

```py
5
10 4 3 10 2
```

#### Output

```py
20
```

### Test Case 2

#### Input

```py
3
10 100 25
```

#### Output

```py
100
```

### Test Case 3

#### Input

```py
6
5 5 10 40 50 35
```

#### Output

```py
80
```

### Test Case 4

#### Input

```py
6
20 50 100 3 5 9
```

#### Output

```py
129
```
