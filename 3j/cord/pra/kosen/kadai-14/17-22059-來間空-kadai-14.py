# 文字数の取得
text = "Hello, world!"
length = len(text)
print("文字数:", length)

# 文字列の比較
text1 = "apple"
text2 = "banana"
if text1 == text2:
    print("文字列は同じです")
else:
    print("文字列は異なります")

# 文字列のコピー
original_text = "Hello"
copied_text = original_text
print("コピーされた文字列:", copied_text)

# 文字列の連結
text1 = "Hello"
text2 = "world!"
concatenated_text = text1 + " " + text2
print("連結された文字列:", concatenated_text)

# 文字列の分割
text = "apple,banana,orange"
splitted_text = text.split(",")
print("分割された文字列:", splitted_text)

# 文字種の判定
text = "Hello123"
if text.isalpha():
    print("文字列は全てアルファベットです")
else:
    print("文字列にはアルファベット以外の文字が含まれています")

# 文字列の置換
text = "Hello, world!"
replaced_text = text.replace("world", "Python")
print("置換された文字列:", replaced_text)