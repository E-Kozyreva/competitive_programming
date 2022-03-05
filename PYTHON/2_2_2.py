numbers = list(input().split())
count_numbers, new_order, index_num = len(numbers), [], 0

for num in range(1, count_numbers, 2):
    new_order.append(numbers[num])
    new_order.append(numbers[index_num])
    index_num += 2

if count_numbers % 2 == 0:
    print(*new_order)
else:
    print(*new_order, numbers[-1])
