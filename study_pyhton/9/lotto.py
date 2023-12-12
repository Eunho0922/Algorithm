import random
lotto = []
while True:
    num = random.randint(1,45)
    if num not in lotto:
        lotto.append(num)
    
    if len(lotto) == 6:
        break;

inputStr = input("콤마 +  공백으로(, ) 번호 6개 입력 :").split(", ")
mine=[]
for n in inputStr:
    mine.append( int(n))

same = 0
for myN in mine:
    if myN in lotto:
        same +=1

score = [0,6,5,4,3,2,1]
if same ==0 :
    print("탈락")
else:
    print( f" {same}개 맞음, {score[same]} 등 당첨!")

# 13 35 42 39 40 24








































































































































































