# 리스트 안에는 어떠한 자료값도 포함할 수 있다.

# odd = [1, 3, 5, 7, 9]
# print(odd)

# a = []
# b = [1, 2, 3]
# c = ['Life', 'is', 'too', 'short']
# d = [1, 2, 'life', 'is']
# e = [1, 2, ['life', 'is']]

# 리스트 인덱싱 슬라이싱
# a = [1, 2, 3]
# print(a[0])
# print(a[0] + a[2])
# print(a[0] + a[-1])

# a = [1, 2, 3, ['a', 'b', 'c']]
# print(a[0])
# print(a[3])
# print(a[-1][0])

# a = [1, 2, 3, 4, 5]
# b = [4, 5, 6]
# print(a[0:2])
# print(a + b)
# print(b * 3)

# b = [4, 5, 6]

# b[2] = 5
# del b[2]
# print(b)

# b = [1, 2, 3, 4, 5]
# del b[0:2]
# print(b)

# a = [1, 2, 3]
# a.append(4)
# print(a)



# print(b)
# b.reverse()
# print(b)

# b = ['a', 'd', 'c']
# b.sort()

# print(b)

# a = [1, 2, 3]
# print(a.index(3)) # 요소의 인덱스 번호 가져옴
# a.insert(0, 4) # 인덱스 0번에 4추가
# a.insert(10, 7) # 인덱스 초과이면 그냥 맨 마지막에 들어감
# print(a)

# a.remove(3)
# print(a)

# a = [1, 2, 3, 3, 5]
# a.pop()
# print(a)

# a = [1, 2, 3, 1]
# print(a.count(1)) # 리스트 안에 x가 몇 개 있는지 조사하여 그 개수를 리턴하는 함수

# a = [1, 2, 3]
# a.extend([4, 5])
# b = [6, 7]
# a.extend(b)
# print(a)


# dic = {'name': 'pey', 'phone': '010-9999-1234', 'birth': '1118'}
# dic['hello'] = "hi"
# del dic['name']
# dic1 = {1: 'a', 1: 'b'}
# print(dic1)
# print(dic)



# ab = [1,2,3,4,5,6,7,8,9,10]
# fuckMyDick = [a for a in ab]

# import random as rd
# ass = [a for in re.]


# a = [1,2,3,4]
# result = [num for num in a if num % 2 == 0]
# result1 = [x*y for x in range(2,10) for y in range(1,10)]
# print(result1)

# def add_many(*args):
#     result = 0
#     for i in args:
#         result += i
#     return result

# b = add_many(1,2,3,4,5,6,7,8,9,10)

# print(b)

# def print_kwargs(**kwargs):
#     print(kwargs)

# print_kwargs(a=1)
# print_kwargs(name='tyler', age=3)

# add = lambda a,b : a+b
# result = add(3,4)
# print(result)

# f = open('연습파일.txt', 'w')
# for i in range(1, 10):
#     write = ("%d번째 줄입니다\n" % i)
#     f.write(write)


# while True:
#     line = f.readline()
#     if not line: break
#     print(line)


# lines = f.readlines()
# for line in lines:
#     line = line.strip()
#     print(line)

# data = f.read()
# print(data)

# for i in range(11, 20):
#     data = "%d번째 줄입니다.\n" % i
#     f.write(data)

with open("foo.txt", 'w') as f:
    f.write("Life is too short, you need python")

