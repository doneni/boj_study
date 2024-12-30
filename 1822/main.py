from sys import stdin

n, m = map(int, stdin.readline().split())
a = set(map(int, stdin.readline().split()))
b = set(map(int, stdin.readline().split()))

a = sorted(a-b)
print(len(a))
for e in a:
    print(e)