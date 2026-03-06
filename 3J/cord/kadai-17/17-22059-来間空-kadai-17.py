def nisin(x):
    temp = [0] * 32
    for i in range(32):
        temp[31-i] = x % 2
        x //= 2
    for i in range(32):
        print(temp[i], end="")

def main():
    a, b = 0, 0
    a = int(input("正の整数aを入力："))
    b = int(input("負の整数bを入力："))
    print("aの２進数は")
    nisin(a)
    print("bの２進数は")
    nisin(b)
    print("a&bは")
    print(a & b)
    print(nisin(a & b))
    print("a|bは")
    print(a | b)
    print(nisin(a | b))
    print("a^bは")
    print(a ^ b)
    print(nisin(a ^ b))
    print("~aは")
    print(~a)
    print(nisin(~a))
    print("~bは")
    print(~b)
    print(nisin(~b))
    print("bを3ビット右シフトした値は")
    print(b >> 3)
    print(nisin(b >> 3))
    print("bを5ビット左シフトした値は")
    print(b << 5)
    print(nisin(b << 5))

main()