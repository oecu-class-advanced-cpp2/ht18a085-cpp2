/*
* �wex-1-main.cpp�x
* �w�Дԍ��FHT18A085
* ���O�F�[�c���l
* ���Ɩ��FC++�v���O���~���O���p���K2
* ��10����� ���K�ۑ�
* �u�f�B���N���̎Z�p�����藝�v
* (���)�^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ̑f�������߂�v���O����
*/

#include <iostream>
using namespace std;

#define CPP2_PRIME_UPPER_LIMIT 1000000		// �T������l�̏���l

/**
*	�wis_prime�֐��x
*	�unth_prime�֐��v�ɗ^����ꂽ���l a ���f�����ǂ�����
*	���f����֐�
*
*	int num ����unth_prime�֐��v�ɗ^����ꂽ���l a
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
*	�^����ꂽ������ a �� d �� n �ɑ΂��āA
*	���̓�������Ɋ܂܂�� n �Ԗڂ̑f�������߂�֐�
*
*	unsigned int a ��� ���߂̑f���̐��l
*	unsigned int d ��� ���l a �𑝉������Ă������̑傫��
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

	std::cout << a << std::endl;		// �������o��

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
	std::cout << std::endl;		// ���s

	std::cout << "367, 186, 151" << "    " << "nth_prime�֐��ɂ�铚���F"; nth_prime(367, 186, 151);
	std::cout << "                          ���o�͗�̓����F" << "92809" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "179, 10, 203" << "     " << "nth_prime�֐��ɂ�铚���F"; nth_prime(179, 10, 203);
	std::cout << "                          ���o�͗�̓����F" << "6709" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "271, 37, 39" << "      " << "nth_prime�֐��ɂ�铚���F"; nth_prime(271, 37, 39);
	std::cout << "                          ���o�͗�̓����F" << "12037" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "103, 230, 1" << "      " << "nth_prime�֐��ɂ�铚���F"; nth_prime(103, 230, 1);
	std::cout << "                          ���o�͗�̓����F" << "103" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "27, 104, 185" << "     " << "nth_prime�֐��ɂ�铚���F"; nth_prime(27, 104, 185);
	std::cout << "                          ���o�͗�̓����F" << "93523" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "253, 50, 85" << "      " << "nth_prime�֐��ɂ�铚���F"; nth_prime(253, 50, 85);
	std::cout << "                          ���o�͗�̓����F" << "14503" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "1, 1, 1" << "          " << "nth_prime�֐��ɂ�铚���F"; nth_prime(1, 1, 1);
	std::cout << "                          ���o�͗�̓����F" << "2" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "9075, 337, 210" << "   " << "nth_prime�֐��ɂ�铚���F"; nth_prime(9075, 337, 210);
	std::cout << "                          ���o�͗�̓����F" << "899429" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "307, 24, 79" << "      " << "nth_prime�֐��ɂ�铚���F"; nth_prime(307, 24, 79);
	std::cout << "                          ���o�͗�̓����F" << "5107" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "331, 221, 177" << "    " << "nth_prime�֐��ɂ�铚���F"; nth_prime(331, 221, 177);
	std::cout << "                          ���o�͗�̓����F" << "412717" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "259, 170, 40" << "     " << "nth_prime�֐��ɂ�铚���F"; nth_prime(259, 170, 40);
	std::cout << "                          ���o�͗�̓����F" << "22699" << std::endl;
	std::cout << std::endl;		// ���s
	std::cout << "269, 58, 102" << "     " << "nth_prime�֐��ɂ�铚���F"; nth_prime(269, 58, 102);
	std::cout << "                          ���o�͗�̓����F" << "25673" << std::endl;

	return 0;
}