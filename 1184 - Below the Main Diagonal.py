operation = input().strip()

matrix = []

for i in range(12):
    row = []
    for j in range(12):
        row.append(float(input()))
    matrix.append(row)

total_sum = 0
count = 0

for i in range(12):
    for j in range(i):
        total_sum += matrix[i][j]
        count += 1

if operation == 'S':
    print(f"{total_sum:.1f}")
elif operation == 'M':
    average = total_sum / count
    print(f"{average:.1f}")
