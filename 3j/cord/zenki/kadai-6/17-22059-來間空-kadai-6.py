

def find_average(numbers):
    total = sum(numbers)
    average = total / len(numbers)
    return average

def find_maximum(numbers):
    return max(numbers)

def find_minimum(numbers):
    return min(numbers)

def find_sum(numbers):
    return sum(numbers)

def main():
    print("3つの数値(小数点以下を含む)を入力")
    numbers = []
    for i in range(3):
        number = float(input("数値を入力: "))
        numbers.append(number)
    
    choice = input("最大値'max'、最小値'min'、合計値'sum'、平均値'average' を入力: ")

    if choice == 'max':
        result = find_maximum(numbers)
        print("最大値は", result)
    elif choice == 'min':
        result = find_minimum(numbers)
        print("最小値は", result)
    elif choice == 'sum':
        result = find_sum(numbers)
        print("合計値は", result)
    elif choice == 'average':
        result = find_average(numbers)
        print("平均値は", result)
    else:
        print("無効な選択")

if __name__ == "__main__":
    main()
