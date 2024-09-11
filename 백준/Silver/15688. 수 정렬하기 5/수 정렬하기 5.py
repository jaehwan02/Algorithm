x = int(input())
y = [int(input()) for _ in range(x)]
print('\n'.join(map(str,sorted(y))))