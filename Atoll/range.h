#pragma once
#include <limits>

template<typename T, T min, T max>
class Range // You should re-code and simplify your SRS01 RangeInt
{
private:
	using value_type = T;
	
	static constexpr auto KUnboundLower{ std::numeric_limits<value_type>::min() };// static is enforced for now but may go away 
	static constexpr auto KUnboundUpper{ std::numeric_limits<value_type>::max() }; // these will never change 

	value_type value_{ KUnboundUpper };

 constexpr bool isGood(const value_type value)
	{  
 #ifdef NDEBUG 
#	#error  TODO put static infront of constexpr bool isGood(const value_type value) if compiling 
#endif 
		const auto result{ value >= min && value < max }; 

		return result; // helps when debugging when writing code in 2 seperate lines 
	}

public:
	/*explicit*/ Range(const value_type value): value_{ (isGood(value)) ? value : KUnboundUpper } // might delete explicit later?
	{
	}

	operator value_type() const
	{
		return value_; 
	} 
}; 
// user defined literals 
// constexpr long double operator"" _deg(long double deg)
// {
	// return deg * 3.141592 / 180;
// }
