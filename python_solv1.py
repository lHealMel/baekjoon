print("input string: ")

a = str(input())

a_list = list(a)

line = int(len(a))

arr = []

for i in range(0, line - 2):
    if (a[i] >= a[i + 1]):
        arr.append(i)

if (a[line - 2] >= a[line - 1]):
    arr.append(line - 1)

for i in arr:
    a_list[i] = a_list[i] + '-'

final = ''
final = final.join(a_list)
final = final.split('-')

set = 0
j = 0
loc = 0
for i in final:
    if (set < len(i)):
        set = len(i)
        loc = j
    j += 1

print(final[loc])
