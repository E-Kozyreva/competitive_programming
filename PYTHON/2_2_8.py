game = input() + "-" + input()

war = {"камень-камень": "ничья", 
       "ножницы-ножницы": "ничья",
       "бумага-бумага": "ничья", 
       "ящерица-ящерица": "ничья", 
       "Спок-Спок": "ничья",
       
       "камень-ножницы": "Тимур", 
       "камень-ящерица": "Тимур",
       "ножницы-бумага": "Тимур", 
       "ножницы-ящерица": "Тимур",
       "бумага-камень": "Тимур",
       "ящерица-бумага": "Тимур", 
       "ящерица-Спок": "Тимур", 
       "Спок-камень": "Тимур",
       "Спок-ножницы": "Тимур", 
       
       "камень-бумага": "Руслан",
       "камень-Спок": "Руслан", 
       "ножницы-камень": "Руслан", 
       "ножницы-Спок": "Руслан", 
       "бумага-ножницы": "Руслан", 
       "бумага-ящерица": "Руслан", 
       "бумага-Спок": "Руслан",
       "ящерица-камень": "Руслан", 
       "ящерица-ножницы": "Руслан",
       "Спок-бамага": "Руслан", 
       "Спок-ящерица": "Руслан",
      }

print(war[game])
