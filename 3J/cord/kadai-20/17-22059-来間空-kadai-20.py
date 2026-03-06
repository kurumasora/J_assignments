# ファイルに書き込む文字列
text = """これは1行目です。
これは2行目です。
これは3行目です。"""

# ファイルに書き込み
file_path = '/Users/user1/Desktop/3j/cord/kadai-20/17-22059-来間空-kadai-20.py'
with open(file_path, 'w', encoding='utf-8') as file:
    file.write(text)

# ファイルの内容を全体を1つの文字列として表示
with open(file_path, 'r', encoding='utf-8') as file:
    content = file.read()
    print("全体を1つの文字列として表示:")
    print(content)

# ファイルの内容を全体をリストとして表示
with open(file_path, 'r', encoding='utf-8') as file:
    content_list = file.readlines()
    print("\n全体をリストとして表示:")
    print(content_list)

# ファイルの内容を1行ずつ表示
with open(file_path, 'r', encoding='utf-8') as file:
    print("\n1行ずつ表示:")
    for line in file:
        print(line, end='')