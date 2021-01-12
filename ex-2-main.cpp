// ex-2-main.cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

namespace cpp2 {
	class mcxi {
	public:
		// オブジェクトを初期化するクラス（コンストラクタ）
		mcxi(const std::string& s) : value_(0) {
			int digit = 0;
			for (auto pos = s.begin(); pos != s.end(); ++pos) {
				if (*pos >= '2' && *pos <= '9') {
					digit = *pos - '0';
				}
				else {
					auto u = unit(*pos);
					value_ += std::max(digit, 1) * u;
					digit = 0;
				}
			}
			// cout << s << endl;
		}
		//----------------------------------------------------------------------------
		// 2 つのオブジェクトの加算結果を取得
		mcxi operator+(const mcxi& rhs) {

			//プログラムの仮実装（加算結果は取得していない）
			mcxi ans = rhs.value_;

			return ans;
		}
		//----------------------------------------------------------------------------
		// 現在の値を mcxi 記法に変換
		std::string to_string() const {
			std::stringstream ss;

			int m_value = value_;
			int c_value = value_;
			int x_value = value_;
			int i_value = value_;

			int m = 0;
			int c = 0;
			int x = 0;
			int i = 0;

			// mの変換 -------------------------------------------------------
			m = m_value / 1000;
			if (m == 1) {
				ss << 'm';
			}
			else if (m > 1) {
				ss << m;
				ss << 'm';
			}

			// cの変換 -------------------------------------------------------
			c = c_value % 1000;
			c = c / 100;
			if (c == 1) {
				ss << 'c';
			}
			else if (c > 1) {
				ss << c;
				ss << 'c';
			}

			// xの変換 -------------------------------------------------------
			x = x_value % 100;
			x = x / 10;
			if (x == 1) {
				ss << 'x';
			}
			else if (x > 1) {
				ss << x;
				ss << 'x';
			}

			// iの変換 -------------------------------------------------------
			i = i_value % 10;
			if (i == 1) {
				ss << 'i';
			}
			else if (i > 1) {
				ss << i;
				ss << 'i';
			}

			return ss.str();
		}
		//----------------------------------------------------------------------------
	private:
		// 単位に対応する値を取得
		int unit(char c) {
			if (c == 'm')return 1000;
			if (c == 'c')return 100;
			if (c == 'x')return 10;
			if (c == 'i')return 1;

			return 0;
		}
		//----------------------------------------------------------------------------
	private:
		int value_;
	};
}

int main() {
	cpp2::mcxi a0("xi");
	cpp2::mcxi b0("x9i");
	auto result0 = a0 + b0;
	std::cout << "3x" << " " << result0.to_string() << std::endl;

	cpp2::mcxi a1("i");
	cpp2::mcxi b1("9i");
	auto result1 = a1 + b1;
	std::cout << "x" << " " << result1.to_string() << std::endl;

	cpp2::mcxi a2("c2x2i");
	cpp2::mcxi b2("4c8x8i");
	auto result2 = a2 + b2;
	std::cout << "6cx" << " " << result2.to_string() << std::endl;

	cpp2::mcxi a3("m2ci");
	cpp2::mcxi b3("4m7c9x8i");
	auto result3 = a3 + b3;
	std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;

	cpp2::mcxi a4("9c9x9i");
	cpp2::mcxi b4("i");
	auto result4 = a4 + b4;
	std::cout << "m" << " " << result4.to_string() << std::endl;

	cpp2::mcxi a5("i");
	cpp2::mcxi b5("9m9c9x8i");
	auto result5 = a5 + b5;
	std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;

	cpp2::mcxi a6("m");
	cpp2::mcxi b6("i");
	auto result6 = a6 + b6;
	std::cout << "mi" << " " << result6.to_string() << std::endl;

	cpp2::mcxi a7("i");
	cpp2::mcxi b7("m");
	auto result7 = a7 + b7;
	std::cout << "mi" << " " << result7.to_string() << std::endl;

	cpp2::mcxi a8("m9i");
	cpp2::mcxi b8("i");
	auto result8 = a8 + b8;
	std::cout << "mx" << " " << result8.to_string() << std::endl;

	cpp2::mcxi a9("9m8c7xi");
	cpp2::mcxi b9("c2x8i");
	auto result9 = a9 + b9;
	std::cout << "9m9c9x9i" << " " << result9.to_string() << std::endl;

	return 0;
}