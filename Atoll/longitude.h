#pragma once
#include "gps.h"
#include "angle.h"

// This entire code borrowed from Professor Besser's github account at: 
// https://github.com/labermt/CST136SRS04


namespace GPS
{
	class Longitude : public Angle<-180, 180>
	{
	public:
		enum class Cardinal { W = -1, E = +1 };

		Longitude(const Cardinal cardinal, const degree_type degree, const minute_type minute, const second_type second);
	};
}
