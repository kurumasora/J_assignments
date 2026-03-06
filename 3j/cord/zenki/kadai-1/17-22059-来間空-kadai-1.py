wa = 0
seki = 1
a = int(input("１つ目の自然数を入力："))
b = int(input("２つ目の自然数を入力："))
if a <= 0 or b <= 0:
    print('自然数以外が入力されました')
    exit()
elif a == b:
    print('同じ自然数が入力されました')
    exit()
elif a > b:
    temp = a
    a = b
    b = temp
for i in range(a ,b+1):
    wa += i
    seki *=i
print(f'{a}から{b}までの全整数の和は{wa}\n')
print(f'{a}から{b}までの全整数の積は{seki}\n')

    

