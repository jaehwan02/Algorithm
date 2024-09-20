a, b = map(int, input().split())
c = list(range(1, a + 1))
answer = []
k = 0

while c:
    k = (k + b - 1) % len(c)
    answer.append(c.pop(k))

print(f'<{", ".join(map(str, answer))}>')