# Rare Antiques

Berlin is in an **auction lot** where there are antiques with *different* ID's, in the black market antiques are *sold in pair* and a pair of antiques are considered **rare** *if their sum of ID is `X`*. Berlin need a **total** number of *rare* antiques so he can plan accordingly.

## Input

- First line represents number of test cases.

    ```py
    1 <= t <= 10^5
    ```

- Second line represents number of antiques and `x` in line.

    ```py
    1 <= n <= 10^5
    ```

- Third line represents the input array/list with *distinct* elements.

    ```py
    0 <= a[i] <= x <= 10^5
    ```

## Output

Number of rare antiques.

## Sample Case

### Input given
```py
1
5 5
1 3 2 4 7
```

### Output
```py
4
```

### Explanation

The antique ID's are given as `1`, `3`, `2`, `4`, `7` and the sum necessary, `X` is `5`. 

Then the pairs satisfying the condition will be `1-4`, `2-3`. Hence, in total `4` antiques are rare.
