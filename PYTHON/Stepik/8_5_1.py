def str_len(word):
    symbols = set(word.lower())
    print(len(symbols))


for _ in range(int(input())):
    str_len(input())
