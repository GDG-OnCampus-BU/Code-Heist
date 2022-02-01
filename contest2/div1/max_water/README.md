# Max water

**Tokyo** is assigned a task to *find max area* to collect water by connecting two sticks at the bottom.

## Input

- First line represents the number of test cases.

    ```py
    1 <= t <= 10^4
    ```
- Second line represents the number of sticks.

    ```py
    1 <= n <= 10^5
    ```

- Third line represents the input array of heights.

    ```py
    0 <= a[i] <= 10^4
    ```

## Output

Index of two sticks to connect.

## Sample case

### Given input

```py
1
5
3 5 4 1 6
```

### Output

```py
15
```

### Explanation

By connecting stick at index `0` and `1`, Tokyo can get the max area of `15` (3 * 5).
