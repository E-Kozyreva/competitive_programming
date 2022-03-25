def ExcellentAndGood(students):
    StudentsList_EG = []
    
    for student in range(len(students)):
        mark = int(students[student][-1])
        if mark == 4 or mark == 5:
            StudentsList_EG.append(students[student])
            print(students[student])
            
    return StudentsList_EG


def Students(count):
    StudentsList = []
    
    for student in range(count):
        StudentsList.append(input())
        print(StudentsList[student])
        
    return StudentsList


StudentsList = Students(int(input()))
print()
ExcellentAndGood(StudentsList)
