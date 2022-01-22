# Hostages

**Professor** have barricades of *different* lengths and he intends to *trap* hostages by creating a **boundary** using those barricades.

However the professor realized -- he can only use **three** barricades to store a group and they should be attached *end to end* so no one can escape, tell the professor how many possible ways there are to assemble barricades.


## Input

- First Line Represents the number of test cases.

    ```py
    1 <= t <= 10^3
    ```

- Second Line Represents the number of barricades.

    ```py
    1 <= n <= 10^3
    ```

- Third Line Represents Input Array

    ```py
    1 <= a[i] <= 10^6
    ```

## Output

Total number of possible arrangements using the barricades.

## Sample Case

### Given Input
```py
1
5
6 7 4 9 1
```

### Output
```py
4
```

### Explanation
Possible arrangements are `9 4 7`, `9 4 6`, `7 4 6`, `7 4 9`, so there are `4` possible arrangements.
