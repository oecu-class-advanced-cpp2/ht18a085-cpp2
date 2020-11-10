/*
* 『ex-1-main.cpp』
* 学生番号：HT18A085
* 名前：深田嘱人
* 授業名：C++プログラミング応用演習2
* 第7回授業 演習課題
* 「ディリクレの算術級数定理」
* (問題)与えられた正整数a と d と n に対して、この等差数列に含まれる n 番目の素数を求めるプログラム
*/

#include <iostream>
using namespace std;

#define CPP2_PRIME_UPPER_LIMIT 1000000		//探索する値の上限値

/*    --------------------------------------------------------------- */
/*
*	nth_prime
*
*	与えられた正整数a と d と n に対して、この等差数列に含まれる n 番目の
*	素数を返す。
*
*	TODO:	このnth_prime 関数を実装せよ。必要であれば他に関数や
*	ファイルを作成せよ。
*/
/*    -------------------------------------------------------------- */

bool isPrime(int num)
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

// nth_prime 関数
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {

	int count = 0;
	while (true)
	{
		if (isPrime(a)) count++;
		if (count == n) break;
		a += d;
	}
	std::cout << a << std::endl;
	return 0;
}

int main()
{
	std::cout << "『C++プログラミング応用演習２ ディレクレの算術級数定理』" << std::endl;
	std::cout << std::endl;	//改行

	std::cout << "367, 186, 151" << "    " << "nth_prime関数による答え："; nth_prime(367, 186, 151);
	std::cout << "                          入出力例の答え：" << "92809" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "179, 10, 203" << "     " << "nth_prime関数による答え："; nth_prime(179, 10, 203);
	std::cout << "                          入出力例の答え：" << "6709" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "271, 37, 39" << "      " << "nth_prime関数による答え："; nth_prime(271, 37, 39);
	std::cout << "                          入出力例の答え：" << "12037" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "103, 230, 1" << "      " << "nth_prime関数による答え："; nth_prime(103, 230, 1);
	std::cout << "                          入出力例の答え：" << "103" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "27, 104, 185" << "     " << "nth_prime関数による答え："; nth_prime(27, 104, 185);
	std::cout << "                          入出力例の答え：" << "93523" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "253, 50, 85" << "      " << "nth_prime関数による答え："; nth_prime(253, 50, 85);
	std::cout << "                          入出力例の答え：" << "14503" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "1, 1, 1" << "          " << "nth_prime関数による答え："; nth_prime(1, 1, 1);
	std::cout << "                          入出力例の答え：" << "2" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "9075, 337, 210" << "   " << "nth_prime関数による答え："; nth_prime(9075, 337, 210);
	std::cout << "                          入出力例の答え：" << "899429" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "307, 24, 79" << "      " << "nth_prime関数による答え："; nth_prime(307, 24, 79);
	std::cout << "                          入出力例の答え：" << "5107" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "331, 221, 177" << "    " << "nth_prime関数による答え："; nth_prime(331, 221, 177);
	std::cout << "                          入出力例の答え：" << "412717" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "259, 170, 40" << "     " << "nth_prime関数による答え："; nth_prime(259, 170, 40);
	std::cout << "                          入出力例の答え：" << "22699" << std::endl;
	std::cout << std::endl;	//改行
	std::cout << "269, 58, 102" << "     " << "nth_prime関数による答え："; nth_prime(269, 58, 102);
	std::cout << "                          入出力例の答え：" << "25673" << std::endl;

	return 0;
}