#ifndef POINT_HH
#define POINT_HH

class Point{

	private:
		double _x;
		double _y;
		
	public:
		Point(double x, double y);

		Point();

		double x() const;
		double y() const;
};


#endif //POINT_HH