#ifndef CANVAS_HH
#define CANVAS_HH

#include "point.hh"
#include <vector>
#include <string>
#include "pgm.hh"

class Canvas{

	private:
		const int _horPixels;
		const int _vertPixels;
		const Point _center;
		const double _height;
		const double _width;
		std::vector<std::vector<int>> _pixelarray;
		
	public:
		Canvas(const Point& center,double width,double height,int horPixels,int vertPixels);
		
		int brightness(int i, int j) const;
		void setBrightness(int i,int j,int brightness);
		Point coord(int i, int j) const;
		void write(const std::string& filename);
};

#endif //CANVAS_HH