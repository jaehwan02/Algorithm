n, m = map(int, input().split())
unheard = set(input() for _ in range(n))
result = sorted(unheard & set(input() for _ in range(m)))
print(len(result), *result, sep='\n')