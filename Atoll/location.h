#pragma once
#include <string>
// This entire code borrowed from Professor Besser's github account at: 
// https://github.com/labermt/CST136SRS04

namespace GPS
{
	class Latitude;
	class Longitude;

	class Location
	{
	private:
		const std::string name_;
		const Latitude latitude_;
		const Longitude longitude_;

	public:
		Location(const std::string name, const Latitude latitude, const Longitude longitude);
	};
}
