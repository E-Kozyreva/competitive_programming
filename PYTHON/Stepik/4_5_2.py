def GetString():
    return list(map(int, input().split()))


def FindIndex(i, j, matrix, MaxElelent):
    for _ in range(i):
        index = [index for index in range(j) if matrix[_][index] == MaxElelent]
        if len(index) > 0:
            print(_, index[0])
            break

            
def GetMaxElement(i, j, matrix):
    elements = set()
    for _ in range(i):
        elements.add(max(matrix[_]))
    FindIndex(i, j, matrix, max(elements))

    
def GetMatrix(i, j):
    matrix = []
    matrix.append(GetString())
    for _ in range(i - 2):
        matrix.append(GetString())
    matrix.append(GetString())
    
    GetMaxElement(i, j, matrix)

    
GetMatrix(int(input()), int(input()))
