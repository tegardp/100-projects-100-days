print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/______/ 
*******************************************************************************
''')
print('Welcome to Treasure Island,\n')
print('Your mission is to find the treasure\n')

choice1 = input("Where would you like to go? Type 'left' or 'right'\n").lower()

if choice1 == 'left':
    choice2 = input("You find a river blocking your way. Do you want to 'swim' across it or 'wait' a little bit?\n")
    if choice2 == 'wait':
        choice3 = input("As you were waiting, suddenly 3 doors popped out from the ground. Which door would you like to enter? 'Red' 'Blue' 'Yellow'\n")
        if choice3 == 'red':
            print("You were burned by fire. Game Over\n")
        elif choice3 == 'yellow':
            print("Congratulations. You find the treasure! You WIN!!\n")
        elif choice3 == 'blue':
            print("Dangerous beast already waiting inside the door. Game Over\n")
        else:
            print("You died without knowing why you died. Game Over\n")
    else:
        print('Attacked by trout. Game Over\n')
else:
    print('Fall into Hole. Game Over\n')