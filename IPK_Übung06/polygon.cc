#include "polygon.hh"
#include <iostream>

	Polygon::Polygon(const std::vector <Point>& corners)
		: _corners(corners)
	{}
	Polygon::Polygon(const std::vector<double>& x, const std::vector<double>& y)
	{
		std::vector<Point> p(x.size());
		for(int i=0;i<x.size();i++){
			Point points ( x[i], y[i] );
			p[i] = points;
		}
		_corners = p;
	}
		
	std::size_t Polygon::corners() const {
		return _corners.size();
	}

	const Point& Polygon::corner(std::size_t i) const {
		return _corners[i];
	}
	
	double Polygon::volume() const{
		if(_corners.size() < 3){
			return 0;
		}

		double Flaecheninhalt=0;
		
		for(int i = 0; i<_corners.size()-1; i++){
				Flaecheninhalt = Flaecheninhalt + (_corners[i].x() * _corners[i+1].y() - _corners[i+1].x() * _corners[i].y());
		}
		return Flaecheninhalt/2;
	}
