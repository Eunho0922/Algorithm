# 1번 :: 구구단 만들기
# 2번 :: 사칙연산 훈련기??
# 3번 :: 난수(랜덤 수) 5000개 중에서 3의 배수합, 7의 배수합 => 함수 사용하기
# 4번 :: 점수 200개를 ABCDE 로 구분하여 with file에 기록하기 (90/80/70/60/~)
# 5번 :: 윤년 / 평년 구분하기
# 6번 :: 정규식 표현 적용하여 문장 속에서 b로 시작하는 단어민 나열하고 개수 구하기
# 7번  :: 60개의 난수에 대하여 소수 / 합성수 판정 file에 기록하기

# 1️⃣ 구구단

# for i in  range(1, 10):
#     for j in range(1, 10):
#         print(i, " X ", j, " =  ", i * j, end="\n" )
#     print("")

# for i in  range(1, 10):
#     for j in range(1, 10):
#         print(j, " X ", i, " =  ", i * j, end="\t" )
#     print("")

#-------------------------------------------------------------------------------------------------------------------------------------------------


# 2️⃣ 사칙연산


# 3️⃣ 배수합 구하기
# import random

# def calculate_sum(n, divisor):
#     return sum(i for i in n if i % divisor == 0)

# random_numbers = [random.randint(1, 5000) for _ in range(5000)]
# print(random_numbers)

# sum_of_multiples_of_three = calculate_sum(random_numbers, 3)
# sum_of_multiples_of_seven = calculate_sum(random_numbers, 7)

# print("3의 배수의 합: ", sum_of_multiples_of_three)
# print("7의 배수의 합: ", sum_of_multiples_of_seven)

# import random

# def calculate(n, divNum):
#     return sum(i for i in n if i % divNum == 0)

# randomNumber = [random.randint(1, 5000) for i in range(5000)]

# print(calculate(randomNumber, 3))
# print(calculate(randomNumber, 7))




# import random

# def grade(score):
#     if score >= 90:
#         return 'A'
#     elif score >= 80:
#         return 'B'
#     elif score >= 70:
#         return 'C'
#     elif score >= 60:
#         return 'D'
#     else:
#         return 'E'

# scores = [random.randint(1, 100) for i in range(200)]
# grades = [grade(i) for i in scores]

# with open("sosu.dat", 'w') as f:
#     for scores, grades in zip(scores, grades):
#         f.write(f'score : {scores}, grade : {grades}\n')

# with open('grade333s.txt', 'w') as f:
#     for scores, grades in zip(scores, grades):
#         f.write(f'점수 : {scores}, 성적 : {grades}\n')


# import random

# def calculate(n, div):
#     return sum(i for i in n if i % div == 0)

# numbers = [random.randint(0, 1000) for i in range(5000)]

# print(calculate(numbers, 5))
# print(calculate(numbers, 7))



# 4️⃣ 점수 구하기
# import random

# import random

# def grade(score):
#     if score >= 90:
#         return 'A'
#     elif score >= 80:
#         return 'B'
#     elif score >= 70:
#         return 'C'
#     elif score >= 60:
#         return 'D'
#     else:
#         return 'E'
    
# scores = [random.randint(0, 100) for i in range(200)]
# grades = [grade(i) for i in scores]

# with open('grades.txt', 'w') as f:
#     for scores, grades in zip(scores, grades):
#         f.write(f'점수 : {scores}, 성적 : {grades}\n')

# def grade(score):
#     if score >= 90:
#         return 'A'
#     elif score >= 80:
#         return 'B'
#     elif score >= 70:
#         return 'C'
#     elif score >= 60:
#         return 'D'
#     else:
#         return 'E'

# scores = [random.randint(0, 100) for i in range(200)]
# grades = [grade(score) for score in scores]

# scores = [random.randint(0, 100) for i in range(200)]
# grads = [grade(score) for score in scores]

# print(grades, scores)

# with open('grades.txt', 'w') as f:
#     for score, grade in zip(scores, grades):
#         f.write(f'Score: {score}, Grade: {grade}\n')

# with open('grades.txt', 'w') as f:
#     for scores, grades in zip(scores, grades):
#         f.write(f'Score: {scores}, Grade: {grades}\n')

# with open('grades.txt', 'w') as f:
#     for grades, scores in zip(scores, grades):
#         f.write(f'score{scores}, grades; {grades}\n')


# 5️⃣ 윤년 / 평년

# def is_leap(year):
#     if year % 4 == 0:
#         if year % 100 == 0:
#             if year % 400 == 0:
#                 return True
#             else:
#                 return False
#         else:
#             return True
#     else:
#         return False
    
# year = int(input("년도를 입력하세요 : "))

# if is_leap(year):
#     print("윤년")
# else:
#     print("평년")


# def is_leap(year):
#     if year % 4 == 0:
#         if year % 100 == 0:
#             if year % 400 == 0:
#                 return True
#             else:
#                 return False
#         else:
#             return True
#     else:
#         return False

# year = int(input("년도를 입력하세요: "))
# if is_leap(year):
#     print(str(year) + "년은 윤년입니다.")
# else:
#     print(str(year) + "년은 평년입니다.")

# 7️⃣ 정규식
# import re

# def find_words_with_b(sentence):
#         words_with_b = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#         return words_with_b, len(words_with_b)

# sentence = "This is a test sentence with some words containing i love boy 'b'."
# words_with_b, count = find_words_with_b(sentence)

# print(f"'b'가 포함된 단어들: {words_with_b}")
# print(f"'b'가 포함된 단어의 수: {count}")

# def find_word_b(sentence):
#         findWord = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#         return findWord, len(findWord)

# sentence = "This is a test sentence with some words containing i love boy you giot thoe broehseer boss dkfjb"
# findBSentence, count = find_word_b(sentence)

# print(findBSentence, count)




# 8️⃣ 난수 구하기

# import random

# def is_prime(n):
#     if n < 2:
#         return False
#     for i in range(2, int(n**0.5) + 1):
#         if n % i == 0:
#             return False
#     return True

# def write_numbers_to_file(file_path, num_count):
#     with open(file_path, 'w') as file:
#         numbers = [random.randint(1, 1000) for _ in range(num_count)]
#         result = [f"{n}: {'소수' if is_prime(n) else '합성수'}\n" for n in numbers]
#         file.writelines(result)

# file_path = "numbers.txt"
# num_count = 60
# write_numbers_to_file(file_path, num_count)
# print(f"{num_count}개의 난수를 파일에 기록했습니다.")

# import random

# def is_prime(n):
#     if n < 2:
#         return False
#     for i in range(2, int(n**0.5) + 1):
#         if n % i == 0:
#             return False
#     return True

# def write_file(file_path, num_count):
#     with open(file_path, 'w') as file:
#         numbers = [random.randint(1, 1000) for _ in  range(num_count)]
#         result = [f"{n} : {'소수' if is_prime(n) else '합성수'}\n"for n in numbers]
#         file.writelines(result)

# file_path = "sdfsdfsdfsf.txt"
# num_count = 60

# write_file(file_path, num_count)

# import random

# def is_prime(n):
#     if n < 2:
#         return False
#     for i in range(int(n**0.5) + 1):
#         if n % i == 0:
#             return False
#     return True

# def write_file(file_path, num_count):
#     with open(file_path, 'w') as file:
#         numbers = [random.randint(1, 1000) for _ in range(num_count)]
#         result = [f"{n}: {'소수' if is_prime(n) else '합성수'}\n" for n in numbers]
#         file.writelines(result)

# file_path = "nbum.txt"
# num_count = 60

# write_file(file_path, num_count)
# print(f"{num_count}")


# import random 

# def is_prime(n):
#     if n < 2:
#         return False
#     for i in range(2, int(n**0.5) + 1):
#         if n % i == 0:
#             return False
#     return True

# def file_write(file_path, num_count):   
#     with open(file_path, 'w') as file:
#         numbers = [random.randint(1, 1000) for i in range(num_count)]
#         result = [f"{n} : {'소수' if is_prime(n) else '합성수'}\n" for n in numbers]
#         file.writelines(result)

# file_text = "sdfsdfsdfsdfs.txt"
# num_count = 60

# file_write(file_text, num_count)



# 333333333
import random

def calculate(num, div):
        return sum(i for i in num if i % div == 0)

numbers = [random.randint(0,100) for i in range(200)]

print(calculate(numbers, 5))
print(calculate(numbers, 7))

#444444
# import random

# def grade(score):
#     if score >= 90:
#         return 'A'
#     elif score >= 80:
#         return 'B'
#     elif score >= 70:
#         return 'C'
#     elif score >= 60:
#         return 'D'
#     else:
#         return 'E'

# scores = [random.randint(0, 100) for i in range(200)]
# grades = [grade(score) for score in scores]

# for i in range(100):
#         print(i)

# with open('grade5', 'w') as f:
#     for scores, grades in zip(scores, grades):
        # f.write(f'score : {scores}, grade : {grades}\n')

# with open('grades44444', 'w') as f:
#     for scores, grades in zip(scores, grades):
#         f.write(f'scores : {scores}, grades : {grades}\n')

#5555555
def calculate_year(year):
        if year % 4 == 0:
                if year % 100 == 0:
                        if year % 400 == 0:
                                return True
                        else:
                                return False
                else: 
                        return True
        else: 
                return False
a = int(input("년도를 입력하세요 : "))

if calculate_year(a):
    print("윤년")
else:
    print("평년")

#66666666666

# def find_words_with_b(sentence):
#     words_with_b = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#     return words_with_b, len(words_with_b)

# sentence = "This is a test sentence with some words containing i love boy 'b'."
# words_with_b, count = find_words_with_b(sentence)

# print(f"'b'가 포함된 단어들: {words_with_b}")
# print(f"'b'가 포함된 단어의 수: {count}")

# def find_word_b(sentence):
#     findWord = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#     return findWord, len(findWord)

# sentence = "This is a test sentence with some words containing i love boy you giot thoe broehseer boss dkfjb"
# findBSentence, count = find_word_b(sentence)

# print(findBSentence, count)


# import re
# def bbbb(sentence):
#     find_b = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#     return find_b, len(find_b)

# def bbbb(sentence):
#     find_b = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#     return find_b, len(find_b)

# sentence = "This is a test sentence with some words containing i love boy 'b'. skdjfskldjfksjldjlkvnlbvlsn, sldnlsndvlnslckdnssb  bbdsdsc bbbbbbb"
# words_with_b, count = bbbb(sentence)

# print(f"'b'가 포함된 단어들: {words_with_b}")
# print(f"'b'가 포함된 단어의 수: {count}")

# import re
# def bbbb(sentence):
#     fine_b = re.findall(r'\b\w*b\w*\b', sentence, re.I)
#     return fine_b, len(fine_b)


# sentence = "This is a test sentence with some words containing i love boy 'b'. skdjfskldjfksjldjlkvnlbvlsn, sldnlsndvlnslckdnssb  bbdsdsc bbbbbbb"
# find_word, count = bbbb(sentence)

# print(find_word, count)

# 77777



# 심폐지구력 : 호흡 기관이나 순환계가 발달되는 능력
# 근력 : 근육이 힘을 발휘하고 있는 능력
# 근지구력 : 근육이 오래 지속할 수 있는 능력
# 유연성 : 부드럽게 움직일 수 있는 능력
# 신체 구성 : 체내 지방, 뼈, 근육의 양을 비율로 나타낸 것

# 순발력 : 짧은 시간에 최대의 힘을 발휘할 수 있는 능력
# 민첩성 : 운동의 진행 방향을 신속하게 바꿀 수 있는 능력
# 평형성 : 신체의 균형과 안정성을 유지할 수 있는 능력
# 협응성 : 두 개 이상의 신체 부위를 동시에 사용할 수 있는 능력

# 운동빈도 : 얼마나 자주 운동하는가
# 운동강도 : 운동의 힘든 정도
# 운동시간 : 운동의 총 시간
# 운동유형 : 어떤 운동을 하는가


# 안정시 심박수 : 60
# 220 - 17 = 203

# 203 - 60 = 143
# 143 * 0.7 + 60

# RICE
# Rest Rest
# Iciiing Icing
# compressing compressing
# elevation elivation

# 심폐지구력 : 호흡 기관이나 순환계가 발달되는 능력
# 근력 : 근육이 힘을 발휘하는 능력
# 근지구력 : 근육이 오래 지속할 수 있는 능력
# 유엲성 : 몸을 부드럽게 움직일 수 있는 능력
# 신체 구성 : 신체의 체내 지방, 근육, 뼈 등을 비율로 나타낸 것

# 순발력 : 짧은시간에 최대의 힘을 발휘할 수 있는 능력
# 민첩성 : 빠르게 운동 방향을 바꿀 수 있는 능력
# 협응성 : 두개 이상의 신체 부위를 동시에 사용할 수 있는 능력
# 평행성 : 신체의 균형과 안정성을 유지할 수 있는 능력

# 운동빈도 : 얼마나 자주 운동하나
# 운동유형 : 어떤 운동을 하는가
# 운동시간 : 운동의 총 시간
# 운동강도 : 운동의 힘든 정도

# 목표시 심박수 : 제공 : B
# 안정시 심박수 : 제공 : 70?
# 나이 : 제공 17?
# 최대 심박수 = 220 - 나이
# 안정시 심박수 = 60
# 여유 심박수 = 최대 심박수 - 안정시 심박수
# 목표 심박수 = 여유 심박수 * 0.7(70%) + 안정시 심박수

# RICE : Rest, Icing, Compressing, Elevation