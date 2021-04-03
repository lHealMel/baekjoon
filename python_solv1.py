print("input string: ")

a = str(input())

a_list = list(a)  #문자열을 리스트로 만들어준다.

line = int(len(a)) #문자열의 길이를 구한다.

arr = []

for i in range(0, line - 2):  # '>' or '=' 의 경우에는 해당 인덱스 번호를 arr에 저장
    if (a[i] >= a[i + 1]):
        arr.append(i)

if (a[line - 2] >= a[line - 1]):  # 위의 for문에서 끝 문자까지 비교하면
    arr.append(line - 2)          # 오버플로우가 일어나므로 문자열의 끝부분은 다시 비교

for i in arr:
    a_list[i] = a_list[i] + '-' # arr에 저장했던 인덱스에 해당하는 문자에 '-'를 추가해준다.

final = ''.join(a_list).split('-')    # 1. 리스트를 다시 문자열로 변환
                                      # 2. '-' 를 기준으로 나누고, 리스트로 저장한다.

set = 0
j = 0
loc = 0
for i in final:            # final리스트에 있는 값들의 길이를 비교해준다.
    if (set < len(i)):
        set = len(i)
        loc = j            # 만약 set보다 길이가 길면, 해당 인덱스 값을 loc에 저장한다.
    j += 1                 # 인덱스 값을 찾기위해 루프 한번 돌때마다 +1을 해준다.

print(final[loc])
