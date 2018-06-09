#include "stdafx.h"
#include "latitude.h"

namespace GPS
{
	Latitude::Latitude(const Cardinal cardinal, const degree_type degree, const minute_type minute, const second_type second):
		Angle<-89, 90>
	(null, degree_type(((cardinal == Cardinal::S) ? -1 : 1) * degree), minute, second)
	{
	}
}
// tried to utilize std::optional but couldnt get to work :( 