/* ===============================================
 * Data Types
 * ===============================================
 *
 * Author: Satoki Nijikawa
 * Version: 1.00a
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	int myNum = 5; // 整数
	cout << "あたしの数字は" << myNum << "です" << endl;
	float myFloatNum = 5.99; // 浮動小数点
	double myDoubleNum = 9.98; // 浮動小数点
	cout << "現在、価格は＄" << myFloatNum << "ドルです。";
	cout << "かつて＄" << myDoubleNum << "ドルです" << endl;
	char myLetter = 'D'; // 文字
	cout << myLetter << "のNATO名は「デルタ」であります" << endl;
	bool myBoolean = true; // ブーリアンステート
	cout << "ビットが「" << myBoolean << "」設定されている場合は、『オン』になります" << endl;
	string myText = "こんにちは"; // テキスト・ストリング
	cout << "皆さん、" << myText;
	cout << endl;
	return 0;
}
