length, width, matrix = int(input()), int(input()), []

for l_th in range(length):
    column = []
    for w_th in range(width):
        column.append(input())
    matrix.append(column)

for element in matrix:
    print(*element)
