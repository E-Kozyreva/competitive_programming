word = input() + " запретил букву"

for alphabet in range(ord("а"), ord("а") + 32):
    string = ""
    if chr(alphabet) in word:
        print(word, chr(alphabet))
        for symbol in word:
            if symbol != chr(alphabet):
                string += symbol
        word = " ".join(string.split())
