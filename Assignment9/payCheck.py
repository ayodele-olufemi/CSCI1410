'''
Program: 	A Python program to compute employees paycheck
Author: 	Ayodele Olufemi
Date: 		11/03/2021
'''

# Requesting for number of employees
numEmployees = int(input("Enter the number of employees: "))

# Creating a loop to compute employee's paycheck
for i in range(1, numEmployees + 1):
    # Printing header
    print(f"------------------------Employee #{i}------------------------\n")

    # Requesting for employee's hourly rate
    hourlyRate = float(input("Enter the hourly rate: "))

    # Requesting for employee's hourly worked
    hoursWorked = float(input("Enter the hours worked: "))

    # Calculating gross pay
    grossPay = hourlyRate * hoursWorked

    # Calculating tax
    if (grossPay <= 500):
        tax = 0
    elif (grossPay <= 1100):
        tax = grossPay * 0.02
    elif (grossPay <= 12000):
        tax = grossPay * 0.05
    else:
        tax = grossPay * 0.07

    # Calculating net pay
    netPay = grossPay - tax

    # Printing the results
    print(f"Hourly Rate: ${hourlyRate:.2f}\nHours: {hoursWorked:.2f} hours\nPay: ${grossPay:.2f}\nTax: ${tax:.2f}\nNet Pay: ${netPay:.2f}\n")
