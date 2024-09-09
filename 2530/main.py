h, m, s = map(int,input().split(' '))
a = int(input())
s = s + a
while s >= 60:
    m += 1
    s -= 60
while m >= 60:
    h += 1
    m -= 60
while h >= 24:
    h -= 24
print(h,m,s)
