from sys import stdin

for t in range(3):
    N = int(stdin.readline())
    a = [int(stdin.readline()) for i in range(N)]
    if sum(a) == 0:
        print("0")
    elif sum(a) > 0:
        print("+")
    else:
        print("-")
