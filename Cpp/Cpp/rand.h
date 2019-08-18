#ifndef __MYRAND_H__
#define __MYRAND_H__
#include <random>

inline int64_t rand(const int64_t min, const int64_t max)
{
	static std::random_device	rn;			// 외부 장치에서 랜덤 시퀀스 생성
	static std::mt19937_64		rnd(rn());	// 64-bit 랜덤 생성기
	
	std::uniform_int_distribution<int64_t> range(min, max); // 입력한 범위 내 균등한 정수 분포 생성

	return range(rnd);
}

#endif // !__MYRAND_H__