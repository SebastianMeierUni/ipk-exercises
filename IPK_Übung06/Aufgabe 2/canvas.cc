#include "canvas.hh"
#include <iostream>

Canvas::Canvas(const Point& center,double width,double height,int horPixels,int vertPixels)
	: _center(center), _width(width), _height(height), _horPixels(horPixels), _vertPixels(vertPixels),_pixelarray(horPixels,std::vector<int>(vertPixels, 0))

{}
		
		int Canvas::brightness(int i, int j) const{
			return _pixelarray [i] [j];
		}
		void Canvas::setBrightness(int i,int j, int brightness){
			_pixelarray [i] [j] = brightness;
		}

		Point Canvas::coord(int i, int j) const{ //links unten
			double x,y;
				
			x = _center.x() - (_width/_horPixels * (_horPixels/2 - i));
			
			y = _center.y() - (_height/_vertPixels * (_vertPixels/2 - j));
				
			Point p(x, y);	

			return p;
		}
		void Canvas::write(const std::string& filename){	
			write_pgm(_pixelarray, filename);
		}