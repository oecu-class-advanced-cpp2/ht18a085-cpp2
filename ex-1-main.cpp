/*ex-1-main.cpp
* 学籍番号：HT18A085
* 氏名：深田嘱人
* C++プログラミング応用演習2
* 第5回授業 課題2
* 「ディリクレの算術級数定理」
* (問題)与えられた正整数a と d と n に対して、この等差数列に含まれる n 番目の素数を求めるプログラム
*/

#include <iostream>
using namespace std;

#define CPP2_PRIME_UPPER_LIMIT 1000000		//探索する値の上限値。

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
	if (num == 0 || num == 1) return false;
	for (int i = 2; i*i < num + 1; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {

	int count = 0;
	while (true)
	{
		if (isPrime(a)) count++;
		if (count == n) break;
		a += d;
	}
	cout << a << endl;
	return 0;
}

int main()
{
	cout << "367, 186, 151" << "    "; nth_prime(367, 186, 151);
	cout << "179, 10, 203" << "     "; nth_prime(179, 10, 203);
	cout << "271, 37, 39" << "      "; nth_prime(271, 37, 39);
	cout << "103, 230, 1" << "      "; nth_prime(103, 230, 1);
	cout << "27, 104, 185" << "     "; nth_prime(27, 104, 185);
	cout << "253, 50, 85" << "      "; nth_prime(253, 50, 85);
	cout << "1, 1, 1" << "          "; nth_prime(1, 1, 1);
	cout << "9075, 337, 210" << "   "; nth_prime(9075, 337, 210);
	cout << "307, 24, 79" << "      "; nth_prime(307, 24, 79);
	cout << "331, 221, 177" << "    "; nth_prime(331, 221, 177);
	cout << "259, 170, 40" << "     "; nth_prime(259, 170, 40);
	cout << "269, 58, 102" << "     "; nth_prime(269, 58, 102);

	return 0;
}

