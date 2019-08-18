#ifndef __MYRAND_H__
#define __MYRAND_H__
#include <random>

/************************************************ 
 C++ 11 ���ο� random �Լ� ǥ��

 C�� rand() �Լ��� ���� ����Ƽ�� ���� ������. 
����, C++������ random_device ��� ���� 
*************************************************/
namespace mylib
{
	static std::random_device	g_rn;	// �ܺ� ��ġ���� ���� ������ ����
	static std::mt19937_64		g_rnd;	// 64-bit ���� ������ (32-bit ������ mt19937)

	int64_t rand(const int64_t min, const int64_t max)
	{
		std::uniform_int_distribution<int64_t> range(min, max); // �Է��� ���� �� �յ��� ���� ���� ����
		return range(g_rnd);
	}
}

#endif // !__MYRAND_H__