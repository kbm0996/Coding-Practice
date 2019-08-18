#ifndef __MYRAND_H__
#define __MYRAND_H__
#include <random>

/************************************************ 
 C++ 11 새로운 random 함수 표준

 C의 rand() 함수는 난수 퀄리티가 많이 떨어짐. 
따라서, C++에서는 random_device 사용 권장 
*************************************************/
namespace mylib
{
	static std::random_device	g_rn;	// 외부 장치에서 랜덤 시퀀스 생성
	static std::mt19937_64		g_rnd;	// 64-bit 랜덤 생성기 (32-bit 버전은 mt19937)

	int64_t rand(const int64_t min, const int64_t max)
	{
		std::uniform_int_distribution<int64_t> range(min, max); // 입력한 범위 내 균등한 정수 분포 생성
		return range(g_rnd);
	}
}

#endif // !__MYRAND_H__