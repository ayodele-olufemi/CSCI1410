# Write a complete Python program that asks for the price of an item and the quantity purchased,
# and writes out the total cost.


# Get user input for item price

# Get user input for item count

# Calculate the total price

# Print out the total price to the user

'''
Program: A Python program that asks for the price of an item and the quantity purchased, and writes out the total cost.
Author: Ayodele Olufemi
Date: 11/01/2021
'''
# Get price
price = float(input("Enter a price: "))

# Get quantity
quantity = int(input("Enter item count: "))

# Compute total price
totalPrice = price * quantity

# Print result
print(f"The total price is ${totalPrice:.2f}")

