# Greedy Manager

You are the **resource manager** and your job is to manage gold. You already *have enough* to fulfill everyone’s need. There is a queue of people in line who either *give* gold to you represented by **positive**(+) value or *take* gold from you represented by a **negative**(-) value. 

You are a greedy person -- so you decided to *get maximum profit* by **skipping** people in queue. However as you are under surveillance, once you start accepting a person's request you can *only stop once* and you need to take *at least one person*. You already have a list of people and their requests, so you can decide beforehand.

## Input

- First line represents the number of test cases.

- Second line represents the number of people.

- Third line represents the input array/list

## Output

Number of extra gold, possibly `-ve` if you gave the gold.

## Sample Case

### Given Input

There are **7** people waiting in queue:

```py
1
7
-2 -3 4 -1 2 -1 -1
```

### Expected Output

```py
5
```

### Description

You decided to *skip* the first two and then take `4` gold from the 3rd person, *give* `1` gold to the 4th person and again take `2` gold from the 5th person and then stop. In the end, you have `5` extra gold.
