# Team up

**Berlin** is holding people hostages and he asked them all to stand in a line. The professor realized that a person can *team up* with a person on the left whom height is just *less* than the person's height and **escape** easily -- So he asked berlin to divide everyone into teams; returning `-1` if no team partner pair can be created.

## Input

- First line represents the number of test cases.

    ```py
    1 <= t <= 10^4
    ```

- Second line represents the number of people.

    ```py
    1 <= n <= 10^5
    ```

- Third line represents the input array of heights.

    ```py
    0 <= a[i] <= 10^4
    ```

## Output

`N` numbers representing the index of each teamed up partner.

## Sample case

### Given input

```py
1
5
2 5 2 6 7
```

### Output

```py
-1 0 -1 2 3
```

### Explanation

There are `5` people with their heights given, following the algorithm the index of team-up partners will be `-1`, `0`, `-1`, `2`, `3`. 
