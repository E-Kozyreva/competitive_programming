def GetString():
    return list(map(int, input().split()))


def GetMatrix(count):
    matrix = []
    matrix.append(GetString())
    for _ in range(count - 2):
        matrix.append(GetString())
    matrix.append(GetString())
    
    if count % 2 == 0:
        return MaxElement0(count, matrix)
    else:
        return MaxElement1(count, matrix)

    
def Elelemnts(count, matrix):
    elements = []
    for i in range(count // 2):
        elements.append(matrix[i][0:i + 1])
        elements.append(matrix[i][-(i + 1):])
    for i in range(1, (count // 2) + 1):
        elements.append(matrix[-i][0:i])
        elements.append(matrix[-i][-(i):])
        
    return elements


def MaxElement0(count, matrix):
    list0 = Elelemnts(count, matrix)
    return MaxElement(list0)

    
def MaxElement1(count, matrix):
    list1 = Elelemnts(count, matrix)
    list1.append(matrix[count // 2])
    return MaxElement(list1)

    
def MaxElement(matrix):
    maxi = -1_000_000_000
    for _ in range(len(matrix)):
        element = max(matrix[_])
        if element > maxi:
            maxi = element

    print(maxi)
    

GetMatrix(int(input()))
