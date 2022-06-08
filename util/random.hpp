#pragma once

#include <random>

namespace util::random {
	template<typename T>
	T number(auto min, auto max) {
		static std::random_device rd{};
		static std::mt19937 generator(rd());

		return std::uniform_int_distribution<T>(min, max)(generator);
	}
}
