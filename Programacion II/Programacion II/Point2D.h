#ifndef __Point2D_H__
#define __Point2D_H__

#include <math.h>

template <class Type>
class Point2D
{
public:


	//Attributes

	Type x, y;


	//Constructor
	Point2D();


	//Destructor
	~Point2D();

	//Methods

	bool IsZero() const
	{
		return x == 0 && y == 0;
	}

	void SetZero()
	{
		x = y = 0.0f;
	}

	Type DistanceTo(const Point2D p) const
	{
		Type tmpX = x - p.x;
		Type tmpY = y - p.y;

		return sqrtf(tmpX * tmpX + tmpY * tmpY);
	}


	//Operators


	Point2D operator+ (const Point2D p) const
	{
		Point2D tmp;
		tmp.x = x + p.x;
		tmp.y = y + p.y;

		return tmp;
	}

	Point2D operator- (const Point2D& p)const
	{
		Point2D tmp;
		tmp.x = x - p.x;
		tmp.y = y - p.y;

		return tmp;
	}

	Point2D operator+= (const Point2D& p)
	{
		x += p.x;
		y += p.y;

		return *this;
	}

	Point2D operator-= (const Point2D& p)
	{
		x -= p.x;
		y -= p.y;

		return *this;
	}

	bool operator== (const Point2D& p) const
	{
		return x == p.x && y == p.y;
	}

	bool operator!=(const Point2D& p) const
	{
		return x != p.x || y != p.y;
	}

};

typedef Point2D<int> iPoint;
typedef Point2D<float> fPoint;
#endif