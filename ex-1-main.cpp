/**
* �wex-1-main.cpp�x
* �w���ԍ��FHT18A085
* ���O�F�[�c���l
* ���Ɩ��FC++�v���O���~���O���p���K2
* �ۑ薼�F���|�[�g�ۑ�2�i���W�ۑ�2���܂ށj
* �u�f�B���N���̎Z�p�����藝�v
* (���)�^����ꂽ������a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ̑f�������߂�v���O����
*/

#include <iostream>
using namespace std;

#define CPP2_PRIME_UPPER_LIMIT 1000000		// �T������l�̏���l
#define GET_ARRAY_SIZE(a)   (sizeof(a)/sizeof(a[0]))	// �z��̗v�f�����l������

// �����Əo�͌��ʂ̔�r�p�z��
int ans[12] = {};


/**
*	�wis_prime�֐��x
*	�unth_prime�֐��v�ɗ^����ꂽ ���l a ���f����
*	 �ǂ����𔻒肷��֐�
*
*	 int num ����unth_prime�֐��v�ɗ^����ꂽ ���la
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
*	�wnth_prime�֐��x
*	�^����ꂽ������a �� d �� n �ɑ΂��āA
*	���̓�������Ɋ܂܂�� n �Ԗڂ̑f�������߂�֐�
*
*	unsigned int a ��� ���߂̑f��
*	unsigned int d ��� �f��a�𑝉������Ă������̑傫��
*	unsigned int n ���  n �Ԗڂ̑f��
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

	std::cout << a << std::endl;		// �������o��

	return a;
}

/**
*	���|�[�g�ۑ�2_���W�ۑ�2
*
*	�wans_prime�֐��x
*	int�^�̔z��uanswer�v�Ɋi�[���ꂽ�����̒l���g�p���āA
*	�o�͌��ʂƐ����Ƃ̔�r���s���֐�
*
*	unsigned int i ��� �w�肷���萔�i��F���� ��� i = 0�j
*
*/
int ans_prime(unsigned int i) {

	// �����̒l���i�[����z��
	int answer[] = { 92809,6709, 12037, 103, 93523,
		14503, 2, 899429, 5107, 412717, 22699, 25673 };

	if (ans[i] == answer[i])
	{
		// �����̒l�ƈ�v����ꍇ
		std::cout << "�����ł�!" << std::endl;
	}
	else {
		// �����̒l�ƈ�v���Ȃ��ꍇ
		std::cout << "�s�����ł�..." << std::endl;
	}

	return 0;
}


/**
*	nth_prime�֐��̌Ăяo�����s���A������a, d, n�̐��l�����ꂼ��w�肷��B
*	Output of the Sample Input�ɋL�q����Ă���𓚗�ƁAnth_prime�֐���
*	�o�͂������ʂƂ̔�r���s���B
*
*	@ return 0 ��� �I���X�e�[�^�X
*
*/
int main()
{
	std::cout << "�wC++�v���O���~���O���p���K�Q �f�B���N���̎Z�p�����藝�x" << std::endl;
	std::cout << std::endl;	//���s

							// nth_prime (�f���͈̔�, ���������鐔�̑傫��, n�Ԗڂ̑f��)����͂���
							// ans_prime (��萔)����͂���

	std::cout << "[ 367, 186, 151 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(367, 186, 151);
	std::cout << "                 �����F" << "92809" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(0);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 179, 10, 203 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(179, 10, 203);
	std::cout << "                 �����F" << "6709" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(1);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 271, 37, 39 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(271, 37, 39);
	std::cout << "                 �����F" << "12037" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(2);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 103, 230, 1]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(103, 230, 1);
	std::cout << "                 �����F" << "103" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(3);

	std::cout << std::endl; std::cout << std::endl;

	std::cout << "[ 27, 104, 185 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(27, 104, 185);
	std::cout << "         ���o�͗�̓����F" << "93523" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(4);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 253, 50, 85 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(253, 50, 85);
	std::cout << "                 �����F" << "14503" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(5);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 1, 1, 1 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(1, 1, 1);
	std::cout << "                 �����F" << "2" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(6);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 9075, 337, 210 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(9075, 337, 210);
	std::cout << "                 �����F" << "899429" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(7);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 307, 24, 79 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(307, 24, 79);
	std::cout << "                 �����F" << "5107" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(8);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 331, 221, 177 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(331, 221, 177);
	std::cout << "                 �����F" << "412717" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(9);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 259, 170, 40 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(259, 170, 40);
	std::cout << "                 �����F" << "22699" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(10);

	std::cout << std::endl; std::cout << std::endl;	// 2����s

	std::cout << "[ 269, 58, 102 ]" << std::endl;
	std::cout << std::endl;	//���s
	std::cout << "nth_prime�֐��ɂ�铚���F"; nth_prime(269, 58, 102);
	std::cout << "                 �����F" << "25673" << std::endl;
	std::cout << "               ��r���ʁF"; ans_prime(11);

	return 0;
}