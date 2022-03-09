string, number, numbers = input(), "",  []

for element in range(len(string)):
    if string[element] != " ":
        number += string[element]
    if string[element] == " ":
        numbers.append(number)
        number = ""
    if element == len(string) - 1:
        numbers.append(number)

print(numbers[-1], *numbers[:-1])
