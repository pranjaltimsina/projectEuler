def factorial(num):
    mult = 1
    for i in range(2, num+1):
        mult = mult*i
    return mult

my_fact = str(factorial(100))

digit_sum = 0

for dig in my_fact:
    digit_sum = digit_sum + int(dig)

print(digit_sum)


