X = []

for i in range(10):
    num = int(input())
    if num <= 0:
        num = 1
    X.append(num)

for i in range(10):
    print(f"X[{i}] = {X[i]}")
