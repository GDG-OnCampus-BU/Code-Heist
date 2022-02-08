# Trailing zeros

Thanos is a local thug from the streets of Ghaziabad. One day, an opposite gangster Ironman catches Thanos and asks a few intellectual questions. Ironman has agreed that he will release Thanos only if he can solve the following problem. Ironman has a lot of lockers with unique passwords. Since Ironman got hit by a metal rod in his head, he forgot the passwords of each. However, he remembers only one clue to crack the password down. He remembers a PIN number M where Password N is a smallest integer which has M number of zeros at the factorial N!. Since Thanos is not really a guy who is good at Maths, he calls you to solve this to get released. As a childhood friend of Thanos, you need to output the password N whose factorial has M number of zeros at the end.

For example, If M is 2 then N should be 10 as 10! = 3628800, which has 2 zeros at the end. Answer cannot be 9 since 9! = 362880, which is having only 1 zero at the end. If M = 6 then N is 25 As 25! = 15511210043330985984000000, which has 6 zeros at the end.

## Sample case

## Sample Case 1:

## Input

```py
6
```

## Output

```py
25
```

## Sample Case 2

### Input

```py
2
```

### Output

```py
10
```

## Test Case 1

### Input

```py
2
```

### Output

```py
10
```

## Test Case 2

### Input

```py
125
```

### Output

```py
505
```

## Test Case 3

### Input

```py
25
```

### Output

```py
105
```
