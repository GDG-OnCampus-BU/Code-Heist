# Question 1 (name yet to change)

In a **playschool**, there are `n` number of students in total out of which `n/2` are girls and `n/2` are boys. Every morning -- when they are asked to form a queue during prayer time in such a way that first `n/2` students in the queue are girls while the other `n/2` are boys.

Assume yourself as a teacher and rearrange them in such a way that boys and girls should be interleaving each-other. i.e. Initially, if the queue is `G G G G B B B B` then after rearranging the queue, the result should be `G B G B G B G B`.

## Input

- First line represents number of students (`n`)
- `n/2` lines represents registration IDs of girls
- Next `n/2` lines represents registration IDs of boys

## Output

Interleaved queue of students.

> If input is invalid, return "Invalid Input" 

## Sample Cases

### Case 1

#### Given Input

```py
10
403
412
417
435
490
789
786
701
744
721
```

#### Output

```py
403
789
412
786
417
701
435
744
490
721
```

### Case 2:

#### Input

```py
10
321
412
417
435
490
789
786
701
744
721
```

#### Output

```py
Invalid Input
```

#### Explanation

First id starts with '3' but it should start with 4. Therefore print Invalid Input.

## Test Cases

### Case 1

#### Input

```py
6
444
431
421
768
777
743
```

#### Output

```py
444
768
431
777
421
743
```

### Case 2

#### Input

```py
4
420
421
760
730
```

#### Output

```py
420
760
421
730
```

### Case 3

#### Input

```py
2
492
830
```

### Output

```py
Invalid Intput
```
