total_bill = input("Total Bill: ")
tips_percentage = input("Tip Percentage (10, 15, 20): ")
num_of_people = input("Number of people: ")

total_bill = float(total_bill)
tips_percentage = int(tips_percentage)
num_of_people = int(num_of_people)

calculate = (total_bill + total_bill * tips_percentage / 100) / num_of_people
print(f'{calculate:.2f}')