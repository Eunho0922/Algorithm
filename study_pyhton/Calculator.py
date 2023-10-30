class Calculator:
    def __init__(self, first, second):
        self.first = first
        self.second = second

    def add(self):
        result = self.first + self.second
        return result

    def sub(self):
        result = self.first - self.second
        return result

    def mul(self):
        result = self.first * self.second
        return result

    def div(self):
        result = self.first // self.second
        return result
    
    def rem(self):
        result = self.first % self.second
        return result
    def pow(self):
        result = self.first ** self.second
        return result

a, b = map(float, input("두 개의 숫자를 입력하세요. : ").split())
a = int(a)
b = int(b)
num = Calculator(a, b)
calculate = input("계산 방식을 입력하세요. : ")

if calculate == "+":
    print(num.add())
elif calculate == "-":
    print(num.sub())
elif calculate == "*":
    print(num.mul())
elif calculate == "//":
    print(num.div())
elif calculate == "%":
    print(num.rem())
elif calculate == "**":
    print(num.pow())