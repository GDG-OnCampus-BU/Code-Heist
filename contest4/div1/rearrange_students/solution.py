# Get number of students (n)
num_students = int(input())

# Calculate half borderline (n/2)
borderline = num_students // 2

# Get girls registration nums
girl_regs = [int(input()) for _ in range(borderline)]

# Get boys registration nums
boy_regs = [int(input()) for _ in range(borderline)]

# Check for invalid input
if num_students <= 2:
    print("Invalid Input")
    exit()

if girl_regs[0] < 400:
    print("Invalid Input")
    exit()

# Zip them together and print interleaved queue
for girl_reg, boy_reg in zip(girl_regs, boy_regs):
    print(girl_reg) # print one girl reg
    print(boy_reg) # print one boy reg also
