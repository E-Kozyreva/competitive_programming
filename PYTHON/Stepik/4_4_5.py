def max_element(count):
    matrix = list(map(int, input().split()))
    max_element, elements = matrix[0], []
    for _ in range(1, count):
        matrix = list(map(int, input().split()))
        if max_element < max(matrix[:_ + 1]):
            max_element = max(matrix[:_ + 1])
    print(max_element)
    matrix.clear()

    
max_element(int(input()))
