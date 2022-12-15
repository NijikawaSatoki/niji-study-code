# ==========================================================
# 実践　２
# ==========================================================
# 
# 制作者：虹川郷鬼
# バージョン：1.00a

# 変数の宣言します
mystring = "こんばんは！"
myfloat = float(10)
myint = 20

# 条件が満たされている場合に基づいて変数を出力します
if mystring == "こんばんは！":
    print("　文字列　：%s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:
    print("浮動小数点：%f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("　 整数 　：%d" % myint)
