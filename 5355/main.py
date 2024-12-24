from sys import stdin

case = int(stdin.readline())

for _ in range(case):
    line = list(map(str, stdin.readline().split()))
    ans = 0
    for i in range(len(line)):
        if i == 0:
            ans += float(line[i])
        else:
            if line[i] == '@':
                ans *= 3
            elif line[i] == '%':
                ans += 5
            elif line[i] == '#':
                ans -= 7
    print('%0.2f' % ans)
