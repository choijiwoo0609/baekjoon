a = input()    # 정수의 개수
int_a = int(a)         # a를 숫자 자료형으로 변환

N = input()    # int_a개의 정수를 공백으로 구분하여 입력

N_split = N.split(" ") #int_a 개의 정수를 공백으로 구분하여
                            # 리스트에 배정됨.
L = []

for i in range(int(a)) :
    L.append(int(N_split[i]))

M = max(L)              #최대값
m = min(L)              #최솟값

print(m, M)