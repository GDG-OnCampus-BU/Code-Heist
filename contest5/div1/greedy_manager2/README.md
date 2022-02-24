# Greedy Manager 2

You are the **resource manager** and your job is to manage gold. You already *have enough* to fulfill everyone’s need. There is a queue of people in line who either *give* gold to you represented by **positive**(+) value or *take* gold from you represented by a **negative**(-) value. 

You are a greedy person -- so you decided to *get maximum profit* by **skipping** people in queue. However as you are under surveillance, once you start accepting a person's request you can *only stop once* and you need to take *at least one person*. You already have a list of people and their requests, so you can decide beforehand. 

But this time, the people are smart and when a person is skipped, they simply go back to the end of the queue.

## Input

- First line represents the number of test cases.

```py
1 <= T <= 10^5
```

- Second line represents the number of people.

```py
1 <= N <= 10^5
```

- Third line represents the input array/list

```py
-10^4 <= a[i] <= 10^4
```

## Output

Number of extra gold, possibly `-ve` if you gave the gold.

## Sample Case

### Given Input

There are **7** people waiting in queue:

```py
1
7
3 -3 -4 -5 -2 4 -1
```

### Expected Output

```py
6
```

### Description

You decided to *skip* the first `5` people and then they goes back, now the queue looks like `4 -1 3 -3 -4 -5 -2`. Subsequently, you accept `3` more people and then stop. In the end, you have `6` extra gold.

## Test Cases

### Case 1

#### Input

```py
2
20
6 -9 5 2 -2 2 3 6 -1 1 2 -100 7 2 0 3 1 5 0 -2
33
-3 4 -2 -10 -2 6 -4 -8 -5 9 -9 0 1 -7 8 -5 10 -10 1 -5 9 0 -5 1 -6 -1 7 6 9 -4 3 -2 4
```

##### Output

```py
31
24
````

### Case 2

#### Input


````py
4

15

4 1 7 7 2 7 -1 6 5 -6 6 -1 9 4 -7

25

6 8 1 0 -5 1 -2 -6 8 10 4 -1 5 -4 10 -3 -1 9 4 -3 7 10 -5 0 4

45

10 -4 -7 -7 9 -8 1 10 -8 -3 -4 -3 5 -10 -8 -6 -9 -7 -8 -4 6 -6 0 -8 -4 -8 9 -10 1 1 10 -6 -6 -7 -5 9 9 7 0 -10 5 -2 4 7 10

45

-7 -6 -5 -8 -5 -7 -6 -1 -6 -10 -3 -7 -2 -10 -1 -1 -9 -4 -10 -7 -4 -7 -8 -2 -6 -3 -3 -3 -4 -8 -7 -9 -2 -7 -10 -10 -8 -7 -2 -2 -1 -2 -2 -6 -1
```

#### Output

50

69

49

-1

### Case 2

```pythonn
5

31

-2 -18 5 30 -21 23 -22 -14 -20 24 -13 -2 25 -18 14 23 12 10 14 -20 9 23 15 18 -14 -10 -1 19 21 21 -22

26

29 8 -28 23 -30 -20 -24 -16 6 1 -11 -13 -21 -1 21 2 -20 0 -24 -1 -30 19 -14 -9 -30 -28

25
6 8 1 0 -5 1 -2 -6 8 10 4 -1 5 -4 10 -3 -1 9 4 -3 7 10 -5 0 4

45
10 -4 -7 -7 9 -8 1 10 -8 -3 -4 -3 5 -10 -8 -6 -9 -7 -8 -4 6 -6 0 -8 -4 -8 9 -10 1 1 10 -6 -6 -7 -5 9 9 7 0 -10 5 -2 4 7 10

45
-7 -6 -5 -8 -5 -7 -6 -1 -6 -10 -3 -7 -2 -10 -1 -1 -9 -4 -10 -7 -4 -7 -8 -2 -6 -3 -3 -3 -4 -8 -7 -9 -2 -7 -10 -10 -8 -7 -2 -2 -1 -2 -2 -6 -1
```

#### Output

```py
170
37
69
49
-1
```

### Case 4

#### Input

```py
5

31

-2 -18 5 30 -21 23 -22 -14 -20 24 -13 -2 25 -18 14 23 12 10 14 -20 9 23 15 18 -14 -10 -1 19 21 21 -22

26

29 8 -28 23 -30 -20 -24 -16 6 1 -11 -13 -21 -1 21 2 -20 0 -24 -1 -30 19 -14 -9 -30 -28

20

-30 -24 1 -16 10 22 -15 -25 2 -3 30 16 -9 9 22 17 14 -10 -15 -5

70
```
