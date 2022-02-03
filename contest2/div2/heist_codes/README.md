# Heist Codes

The **owner** of a museum wants to set a password for his locker. *Choose* a password for him to use to secure the locker from professor.

## Rules for selecting a password

- Minimum password length is: `6`
- Maximum password length is: `12`
- Should contain atleast one special character `[$, #, @]`
- Should contain atleast one lowercase letter `[a-z]`
- Should contain atleast one uppercase letter `[A-Z]`
- Should contain atleast one numerical value `[0-9]`

## Input

A line containing multiple comma-seperated passwords.

## Output

Password(s) that fulfils the above mentioned rules are returned.

- There exists atleast a single correct password
- Inputs and outputs are case sensitive

## Sample case

### Input

```py
Berlin@23,berlin12
```

### Output

```py
Berlin@23
```
