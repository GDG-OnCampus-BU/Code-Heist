# Question 2 (name yet to change)

Alan is learning to evaluate arithmetic expressions with his friends. His class teacher gave the students a problem like this, and asked "What is the result?":

```py
5 * 4 - 8 / 2 + 9
```

The class got all sorts of different answers, because noone knew the order of operations yet. It became quite annoying for them to evaluate any problem as they had to consider order of operations and parenthesis every single time.

As it turns out, there is a "better" way to evaluate these expressions. The teacher introduces them with a system of arithmetic called "postfix" notation. Create a piece of program that could help Alan and his friends solve the expressions easily.

## Input

First line of input represents postfix expression

## Output

Integer from solved postfix expression 

## Sample Case

### Input

```py
54*82/-9+
```

### Output

```py
25
```

## Test Cases

### Test case 1

#### Input

```py
1234+++
```

#### Output

```py
10
```

### Test Case 2

#### Input

```py
234+6--
```

#### Output

```py
1
```

### Test Case 3

#### Input

```py
32+461/-
```

#### Output

```py
-2
```
