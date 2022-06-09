#pragma once
#include <string>

namespace practice01
{
	class OneOne
	{
	public:
		/**
		 * \brief 문자열에 포함된 문자들이 전부 유일한지를 검사
		 * 다른 자료구조를 사용할 수 없음.
		 * \param str 들어올 문자열
		 * \return 유일 - true
		 */
		static bool CheckAllCharUnique(const std::string& str);

		/**
		 * \brief 우선,
		 * 문자가 Unicode인지 ASCII인지 확인을 하여야한다.
		 * ASCII일 경우 가능한 문자는 256가지 이므로
		 * 문자열의 길이가 256보다 크다면 false를 반환한다.
		 * bool 배열을 만들어 모든 원소를 확인한다.
		 * 시간 복잡도 O(n) 공간 복잡도 O(1) (256)
		 */
		static bool CheckAllCharUnique2(const std::string& str);

		/**
		 * \brief 우선,
		 *	2와 같으나 비트 벡터를 사용한다.
		 *	공간을 1/8 까지 줄일 수 있다.
		 */
		static bool CheckAllCharUnique3(const std::string& str);
	};
}
