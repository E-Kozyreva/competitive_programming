count = int(input())

count_1, count_2, count_3, count_4 = 0, 0, 0, 0
all_cordinates = {"Первая четверть:": count_1,
                  "Вторая четверть:": count_2,
                  "Третья четверть:": count_3,
                  "Четвертая четверть:": count_4,
                 }

for coordinates in range(count):
    x, y  = map(int, input().split())
    if x > 0 and y > 0:   #1
        count_1 += 1
        all_cordinates["Первая четверть:"] = count_1
    elif x < 0 and y > 0: #2
        count_2 += 1
        all_cordinates["Вторая четверть:"] = count_2
    elif x < 0 and y < 0: #3
        count_3 += 1
        all_cordinates["Третья четверть:"] = count_3
    elif x > 0 and y < 0: #4
        count_4 += 1
        all_cordinates["Четвертая четверть:"] = count_4
        
for coordinates, count in all_cordinates.items():
    print(coordinates, count)
    
