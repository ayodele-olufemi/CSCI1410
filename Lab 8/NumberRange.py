# Write a complete Python program that asks the user for a positive integer "n", and then writes
# out all the numbers from 1 up to and including "n".

# Get user input for a positive number
number = int(input("Enter a positive number: "))

# Check if number is positive
if (number > 0):
# Loop through to print numbers from 1 up to and including n
	for num in range(1, number+1):
		print(num)



