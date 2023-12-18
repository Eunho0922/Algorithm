python_test = '''
- 여러 가지 연산 (산술, 관계, 논리, 문자열)
- 여러 가지 자료형의 특징
- l_value, r_value의 개념
- 자료의 복사
- 스트링 자료의 슬라이싱
- 스트링 자료에 사용되는 여러 가지 메소드
- range()를 이용한 for문 구구단
- 논리식의 연산 - 윤년 / 평년 구분하기
- 리스트 comprehension
- 텍스트 파일의 읽기 / 쓰기
- 바이너리 파일의 읽기 / 쓰기
- 에라토스테네스의 체 (소수 구하기)
- 어떤 수의 배수 고르기
- 합집합, 곱집합, 차집합의 개념 이해하기
- 정규 표현식을 이용한 문자열 추출
'''

LR_value = """

"""

# a = [1,3,5]
# b = [2,4]
# a.extend(b)

# print(a,b)
# print(id(a))
a = [1,2,3]
b = a
print(id(a), id(b))
b = b + [4]
b.extend([5])
print(id(a), id(b))
b = b + [6]
print(a,b)
print(id(a), id(b))

# origin = [1,3,5,7,9]
# l = [a*a for a in origin if a > 5 ]
# print(l)

# import random
# origin = [random.randint(1,100) for _ in range(5000)]
# print(origin)

# with open("test.png", "rb") as f:
#     byte = f.read(1)
#     while byte != b"":
#         print(byte)
#         byte = f.read(1)

# data = [1, 2, 3, 4, 5]
# with open("data.bin", "wb") as f:
#     f.write(bytes(data))

# a = [1,2,3]
# b = [4,5]
# c = a + b
# c[3] = 7
# print(a,b,c)