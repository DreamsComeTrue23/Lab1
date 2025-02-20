name = input("What is your name?")
print(f"Hello {name}")

studentID = input("What is your Student ID?")
print(f"Your ID is {studentID}")

var1 = input("Enter var1: ")
var2 = input("Enter var2: ")

var1 = int(var1)
var2 = int(var2)

sum = var1 + var2
diff = var1 - var2
prod = var1 * var2

print(f"var1: {var1}\nvar2: {var2}\nsum: {sum}\ndiff: {diff}\nprod: {prod}")

name = input("Enter your name: ")
labGrade = input("Lab Grade: ")
midtermGrade = input("Midterm Grade: ")
finalGrade = input("Final Grade: ")

labGrade = int(labGrade)
midtermGrade = int(midtermGrade)
finalGrade = int(finalGrade)

lastScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;
print(f"Name: {name}\nLab: {labGrade}\nMidterm: {midtermGrade}\nFinal: {finalGrade}\nLast Score: {lastScore}")

print("*\n**\n***\n**\n*")

