import sys

read = sys.stdin.readline
for i in [3, 2, 1]:
    c = read()
    if '1' <= c[0] and c[0] <= '9' :
        n = int(c) + i
if n % 3 == 0:
    if n % 5 == 0:
        print("FizzBuzz")
    else:
        print("Fizz")
else:
    if n % 5 == 0:
        print("Buzz")
    else:
        print(n)
    
