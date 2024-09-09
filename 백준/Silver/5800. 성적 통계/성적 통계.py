n = int(input())
for i in range(n):
    data = list(map(int, input().split()))
    scores = sorted(data[1:])
    max_score = scores[-1]
    min_score = scores[0]
    largest_gap = max(scores[j+1] - scores[j] for j in range(len(scores) - 1))
    print(f'Class {i+1}')
    print(f'Max {max_score}, Min {min_score}, Largest gap {largest_gap}')
