def f(i):
    if i==0:
        dp[i] = 0
        return dp[i]
    elif i<0:
        return float('inf')
    elif dp[i] != -1:
        return dp[i]
    else:
        dp[i] = min(f(i - 3), f(i - 5)) + 1
        return dp[i]

i = int(input())
dp = [-1] * (i + 1)
answer = f(i)
print(-1 if answer==float('inf') else answer)