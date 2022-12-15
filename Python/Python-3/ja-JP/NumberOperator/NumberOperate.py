# ==========================================================
# 数値での演算子の使用
# ==========================================================
# 
# 制作者：虹川郷鬼
# バージョン：1.00a

"""

数値に対して演算子を使用して、数学的な計算を実行できます。

【使用可能な数学演算子】
「+」	足し算（例えば：5 + 4）		詳細については：https://ja.wikipedia.org/wiki/%E5%8A%A0%E6%B3%95
「-」	引き算（例えば：5 - 4）		詳細については：https://ja.wikipedia.org/wiki/%E6%B8%9B%E6%B3%95
「*」	掛け算（例えば：5 * 4）		詳細については：https://ja.wikipedia.org/wiki/%E4%B9%97%E6%B3%95
「/」	割り算（例えば：5 / 4）		詳細については：https://ja.wikipedia.org/wiki/%E9%99%A4%E6%B3%95
「%」	モジュロ（例えば：5 % 4）	詳細については：https://ja.wikipedia.org/wiki/%E5%89%B0%E4%BD%99%E6%BC%94%E7%AE%97
「**」	べき指数（例えば：5 ** 4）	詳細については：https://ja.wikipedia.org/wiki/%E5%86%AA%E4%B9%97
「//」	床関数（例えば：5 // 4）	詳細については：https://ja.wikipedia.org/wiki/%E5%BA%8A%E9%96%A2%E6%95%B0%E3%81%A8%E5%A4%A9%E4%BA%95%E9%96%A2%E6%95%B0

例を以下に示します。

"""

# 数学をセットアップします
twentyfour = float(24)
fourtyone = float(41)

# 答えをセットアップします
sum = twentyfour + fourtyone
difference = twentyfour - fourtyone
product = twentyfour * fourtyone
quotient = twentyfour / fourtyone
modulo = twentyfour % fourtyone
power = twentyfour ** fourtyone
floorquotient = twentyfour // fourtyone

# 答えを出力します
print("24 + 41の答えは%fです。" % sum)
print("24 - 41の答えは%fです。" % difference)
print("24 * 41の答えは%fです。" % product)
print("24 / 41の答えは%fです。" % quotient)
print("24 %% 41の答えは%fです。" % modulo)
print("24 ** 41の答えは%fです。" % power)
print("24 // 41の答えは%fです。" % floorquotient)
