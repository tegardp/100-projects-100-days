countTrue = 0
countLove = 0
name1 = input('name1 = ')
name2 = input('name2 = ')
concatName = name1.lower() + name2.lower()

for i in concatName:
    if i == 't' or i == 'r' or i == 'u' or i == 'e' and countTrue < 10:
        countTrue += 1
    if i == 'l' or i == 'o' or i == 'v' or i == 'e' and countLove < 10:
        countLove += 1

results = countTrue * 10 + countLove

if results < 10 or results > 90:
    print(f"Your score is {results}, you go together like coke and mentos.")
elif results > 40 or results < 50:
    print(f"Your score is {results}, you are alright together.")
else:
    print(f"Your score is {results}.")

