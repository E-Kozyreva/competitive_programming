game = str(input() + "-" + input())

war = {"камень-камень":   "ничья", 
       "ножницы-ножницы": "ничья",
       "бумага-бумага":   "ничья",
       
       "камень-ножницы":  "Тимур",
       "ножницы-бумага":  "Тимур",
       "бумага-камень":   "Тимур",
       
       "камень-бумага":   "Руслан", 
       "ножницы-камень":  "Руслан",
       "бумага-ножницы":  "Руслан",
      }

print(war[game])