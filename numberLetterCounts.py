numbersToWords = {
    1: "one",
    2: "two",
    3: "three",
    4: "four",
    5: "five",
    6: "six",
    7: "seven",
    8: "eight",
    9: "nine",
    10: "ten",
    11: "eleven",
    12: "twelve",
    13: "thirteen",
    14: "fourteen",
    15: "fifteen",
    16: "sixteen"
}

letterCount = 0

def getTens(numb):
    ...

def getLetters(numb):
    returnString = ""
    if (numb == 1000):
        return "OneThousand"
    elif (1000 > numb > 99):
        returnString += int(str(numb)[0]) + "hundred"
    
for i in range(1, 1001):
    letterCount += getLetters(i)

print(letterCount)