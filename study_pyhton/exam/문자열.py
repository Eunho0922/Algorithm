# food = "안녕하세요 이은호's 님"
# say = '안녕하세요 이은호"s 님'
# print(food, "\n" + say)




# multiline = "Life is too short \nYou need python"
# print(multiline)
# multiline = """Life is too short
# You need python
# """
# print(multiline)

# head = "sdfsdf"
# tail = "ssfsdf"
# print(head + tail)

# a = "python"
# a = a * 2
# print(a)

# a = "Life is too short"
# print(len(a))

a = "Life is too short"
b = a[1] + a[2] + a[3] + a[4]
print(b)
print(a[8:11])  # 8 ~ 10
print(a[-1])
print(a[-0])
print(a[0:])
print(a[:8])
print(a[:])

# print("I eat %d %d apples" %(3, 2))


# print("%10s" % "hi")
# print("%-10sjane" % "hi")

# print("%0.4f" % 3.141592)
# print("%10.4f" % 3.141592)

# print("I eat {0} apples." .format(3)) # 포멧 함수
# print("I eat {0} apples." .format("five")) # 포멧 함수
# number = 3
# print("I eat {0} apples. {1} day" .format(number, "four")) # 포멧 함수

# 문자열 정렬
# print("{0:<10}hello" .format("hi")) # 왼쪽 정렬
# print("{0:>10}" .format("hi")) # 오른쪽 정렬
# print("{0:^10}" .format("hi")) # 가운데 정렬

# 문자열 정렬 공백 채우기
# print("{0:=<10}hello" .format("hi")) # 왼쪽 정렬 = 채우기
# print("{0:!^10}hello" .format("hi")) # 왼쪽 정렬 = 채우기

# y = 3.1415926536
# print("{0:<10.4f}" .format(y))

# {} 중괄호 출력하기
# print("{{ and }}" .format())

# name = '이은호'
# age = 17
# d = {'name':'이은호', 'age':40}
# print(f'내 이름은 {name}이고 나이는 {age + 1}입니다.')
# print(f'내 이름은 {name}이고 나이는 {age + 1}입니다.')
# print(f'나의 이름은 {d["name"]}이고 나이는 {d["age"]}입니다.')


# a = "happy"
# print(a.count("p"))
# print(a.find("p")) # 단어가 없으면 -1 출력함 오류는 안남
# print(a.index("y")) # 단어가 없으면 오류가 나버림
# print("," .join("abcd"))
# print("," .join(['a', 'b', 'c', 'd']))
# a = "hi"
# b = "HI"
# c = "    hi  "
# print(a.upper())
# print(b.lower())
# print(c.lstrip())
# print(c.rstrip())

# a = "Life is too short"
# print(a.replace("Life", "Your leg"))

#split 
# a = "Life is too short"
# print(a.split())
# b = "a:b:c:d"
# print(b.split(":"))

# c = """Hello my name is tyler,
# My age is 17 years old,
# Thack you very much"""
# print(c.split("\n"))