#include "point.hh"

	Point::Point(double x, double y)	
		: _x(x), _y(y)
	{}
	Point::Point(const Point& p2)
    		: _x(p2.x()), _y(p2.y())
    	{}

	Point::Point()
		: _x(0), _y(0)
	{}

	double Point::x() const {
		return _x;
	}
	double Point::y() const	{
		return _y;
	}
