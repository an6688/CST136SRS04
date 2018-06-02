#pragma once
#include <optional>

// This entire code borrowed from Professor Besser's github account at: 
// https://github.com/labermt/CST136SRS04

namespace GPS
{
	template<int min, int max>
	class Angle
	{
		static_assert(min <= max);

	protected:
		using base_zero_sign_type = enum sign { negative = -1, positive = 1 };

	private:
		using base_degree_type = int;
		using base_minute_type = unsigned;
		using base_second_type = unsigned;

	protected:
		using zero_sign_type = std::optional<base_zero_sign_type>;
		using degree_type = Range<base_degree_type, min, max>;
		using minute_type = Range<base_minute_type, 0, 60>;
		using second_type = Range<base_second_type, 0, 60>;

	private:
		const zero_sign_type zero_sign_; 
		const degree_type degree_;
		const minute_type minute_;
		const second_type second_;

	public:
		static constexpr zero_sign_type null;

	public:
		Angle(const zero_sign_type zero_sign, const degree_type degree, const minute_type minute, const second_type second):
		zero_sign_{degree == 0 ? zero_sign : null},
		degree_{degree}, 
		minute_{minute}, 
		second_{second}
		{
		}
	};
}
