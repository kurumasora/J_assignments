
x,y,z = 0

def findmax(numbers):
    
    max = x
    if(y > max):
        max = y
    elif(z > max):
        max = z

    return max(numbers)

def findmin(numbers):
    
    min = x
    if(y < min):
        min = y
    elif(z < min):
        min = z

    return min(numbers)

def findsum(numbers):
    sum = x + y + z 
    return sum(numbers)

def findave(numbers):
    average = sum / 3
    return findave(numbers)

def main():

 
    print("3つの数値(小数点以下を含む)を入力")
    for i in range(3):
        numbers = input("数値を入力: ")
    return numbers
    choice = input("1:最大値、2:最小値、3:合計値、4:平均値を入力: ")

    if choice == 1:
        result = findmax(numbers)
        print("最大値は", result)
    elif choice == 2:
        result = findmin(numbers)
        print("最小値は", result)
    elif choice == 3:
        result = findsum(numbers)
        print("合計値は", result)
    elif choice == 4:
        result = findave(numbers)
        print("平均値は", result)
    else:
        print("無効な選択")

if __name__ == "__main__":
    main()

