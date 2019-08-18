#ifndef __MYRAND_H__
#define __MYRAND_H__
#include <random>

/************************************************ 
 C�� rand() �Լ��� ���� ����Ƽ�� ���� ������. 
����, C++������ random_device ��� ���� 
*************************************************/

inline int64_t rand(const int64_t min, const int64_t max)
{
	static std::random_device	rn;			// �ܺ� ��ġ���� ���� ������ ����
	static std::mt19937_64		rnd(rn());	// 64-bit ���� ������
	
	std::uniform_int_distribution<int64_t> range(min, max); // �Է��� ���� �� �յ��� ���� ���� ����

	return range(rnd);
}

#endif // !__MYRAND_H__