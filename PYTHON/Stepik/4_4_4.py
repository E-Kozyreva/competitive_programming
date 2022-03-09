def matrix_string(count):
    for _ in range(count):
        flag = 0
        matrix = list(map(int, input().split()))
        for num in range(count):
            if sum(matrix) / count < matrix[num]:
                flag += 1
        print(flag)
        matrix.clear()

                      
matrix_string(int(input()))
