digits= input().split()
count_of_elements, count_digits = 0, len(digits)

if count_digits > 1:
    for digit in range(count_digits - 1):
        if int(digits[digit]) < int(digits[digit + 1]):
            count_of_elements += 1
    print(count_of_elements)
else:
    print(0)
    
