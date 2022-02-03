# Count the frequency

Find the number of **occurrences** of *every character* in a given word.

For this purpose, you design a *function* which takes in a word and a character as arguments and *returns* the number of occurrences of the character in the given word in **alphabetical order**.

## Input

A single line representing the input word.

## Output

Each line representing a character with its occurrence count in the format `[char]:[count]`

- Output is case-insensitive (meaning 'a' and 'A' are same)
- Output should be in alphabetical order

## Sample case

### Input

```py
Mississippi
```

### Output

```py
i:4
m:1
p:2
s:4
```

## Testcase 1

### Input

```py
CoDeR
```

### Output

```py
c:1
d:1
e:1
o:1
r:1
```

## Testcase 2

### Input

```py
AAaaAA
```

### Output

```py
a:6
```

## Testcase 3

### Input

```py
Heist
```

### Output

```py
e:1
h:1
i:1
s:1
t:1
```
