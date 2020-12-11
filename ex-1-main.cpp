/**
* 『ex-1-main.cpp』
* 学生番号：HT18A085
* 名前：深田嘱人
* 授業名：C++プログラミング応用演習2
* 課題名：レポート課題2（発展課題2を含む）
* 「ディリクレの算術級数定理」
* (問題)与えられた正整数a と d と n に対して、この等差数列に含まれる n 番目の素数を求めるプログラム
*/

#include <iostream>
using namespace std;

#define CPP2_PRIME_UPPER_LIMIT 1000000		// 探索する値の上限値
#define GET_ARRAY_SIZE(a)   (sizeof(a)/sizeof(a[0]))	// 配列の要素数を獲得する

// 正解と出力結果の比較用配列
int ans[12] = {};


/**
*	『is_prime関数』
*	「nth_prime関数」に与えられた 数値 a が素数か
*	 どうかを判定する関数
*
*	 int num ･･･「nth_prime関数」に与えられた 数値a
*/
bool is_prime(int num)
{
	if (num == 0 || num == 1)
		return false;

	for (int i = 2; i*i < num + 1; i++)
	{
		if (num % i == 0)
			return false;
	}

	return true;
}

/**
*	『nth_prime関数』
*	与えられた正整数a と d と n に対して、
*	この等差数列に含まれる n 番目の素数を求める関数
*
*	unsigned int a ･･･ 初めの素数
*	unsigned int d ･･･ 素数aを増加させていく数の大きさ
*	unsigned int n ･･･  n 番目の素数
*
*/
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {

	int count = 0;

	for (int i = a; i < CPP2_PRIME_UPPER_LIMIT; i++) {

		if (is_prime(a)) count++;
		if (count == n) break;
		a += d;
	}

	for (int j = 0; j < GET_ARRAY_SIZE(ans); j++) {
		ans[j] = a;
	}

	std::cout << a << std::endl;		// 答えを出力

	return a;
}

/**
*	レポート課題2_発展課題2
*
*	『ans_prime関数』
*	int型の配列「answer」に格納された答えの値を使用して、
*	出力結果と正解との比較を行う関数
*
*	unsigned int i ･･･ 指定する問題数（例：第一問 ･･･ i = 0）
*
*/
int ans_prime(unsigned int i) {

	// 正解の値を格納する配列
	int answer[] = { 92809,6709, 12037, 103, 93523,
		14503, 2, 899429, 5107, 412717, 22699, 25673 };

	if (ans[i] == answer[i])
	{
		// 正解の値と一致する場合
		std::cout << "正解です!" << std::endl;
	}
	else {
		// 正解の値と一致しない場合
		std::cout << "不正解です..." << std::endl;
	}

	return 0;
}


/**
*	nth_prime関数の呼び出しを行い、引数にa, d, nの数値をそれぞれ指定する。
*	Output of the Sample Inputに記述されている解答例と、nth_prime関数が
*	出力した結果との比較を行う。
*
*	@ return 0 ･･･ 終了ステータス
*
*/
int main()
{
	std::cout << "『C++プログラミング応用演習２ ディレクレの算術級数定理』" << std::endl;
	std::cout << std::endl;	//改行

							// nth_prime (素数の範囲, 増加させる数の大きさ, n番目の素数)を入力する
							// ans_prime (問題数)を入力する

	std::cout << "[ 367, 186, 151 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(367, 186, 151);
	std::cout << "                 正解例：" << "92809" << std::endl;
	std::cout << "               比較結果："; ans_prime(0);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 179, 10, 203 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(179, 10, 203);
	std::cout << "                 正解例：" << "6709" << std::endl;
	std::cout << "               比較結果："; ans_prime(1);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 271, 37, 39 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(271, 37, 39);
	std::cout << "                 正解例：" << "12037" << std::endl;
	std::cout << "               比較結果："; ans_prime(2);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 103, 230, 1]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(103, 230, 1);
	std::cout << "                 正解例：" << "103" << std::endl;
	std::cout << "               比較結果："; ans_prime(3);

	std::cout << std::endl; std::cout << std::endl;

	std::cout << "[ 27, 104, 185 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(27, 104, 185);
	std::cout << "         入出力例の答え：" << "93523" << std::endl;
	std::cout << "               比較結果："; ans_prime(4);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 253, 50, 85 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(253, 50, 85);
	std::cout << "                 正解例：" << "14503" << std::endl;
	std::cout << "               比較結果："; ans_prime(5);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 1, 1, 1 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(1, 1, 1);
	std::cout << "                 正解例：" << "2" << std::endl;
	std::cout << "               比較結果："; ans_prime(6);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 9075, 337, 210 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(9075, 337, 210);
	std::cout << "                 正解例：" << "899429" << std::endl;
	std::cout << "               比較結果："; ans_prime(7);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 307, 24, 79 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(307, 24, 79);
	std::cout << "                 正解例：" << "5107" << std::endl;
	std::cout << "               比較結果："; ans_prime(8);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 331, 221, 177 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(331, 221, 177);
	std::cout << "                 正解例：" << "412717" << std::endl;
	std::cout << "               比較結果："; ans_prime(9);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 259, 170, 40 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(259, 170, 40);
	std::cout << "                 正解例：" << "22699" << std::endl;
	std::cout << "               比較結果："; ans_prime(10);

	std::cout << std::endl; std::cout << std::endl;	// 2回改行

	std::cout << "[ 269, 58, 102 ]" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "nth_prime関数による答え："; nth_prime(269, 58, 102);
	std::cout << "                 正解例：" << "25673" << std::endl;
	std::cout << "               比較結果："; ans_prime(11);

	return 0;
}