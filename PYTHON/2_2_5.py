count, multiplication = int(input()), []

for num in range(count):
    multiplication.append(int(input()))
        
flag = int(input())
    
for num in range(count):
    for multiplier in range(count):
        if multiplier != num:
            number = multiplication[num] * multiplication[multiplier]
            multiplication.append(number)

if flag in multiplication:
    print("ДА")
else:
    print("НЕТ")
