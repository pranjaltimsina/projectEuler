myString = str(2**1000)
sum = 0
for letter in myString:
    sum += int(letter)

print("The total sum is", sum)