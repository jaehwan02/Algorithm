a, b = map(int, input().split())
c = sorted(map(int, input().split()))
n = 0
for i in c:
    if a < 200:
        n += 1
        a += i
    else:
        break
print(n)