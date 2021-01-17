#pragma once
class Point
{
private:

	double xPos;
	double yPos;

public:
	//ctor
	Point();
	Point(double _xpos, double _ypos);
	

	

	//methoden
	double getX()const;
	void setX(double neu_xpos);
	double getY()const;
	void setY(double neu_ypos);
	void move(double dx, double dy);
	void print(bool absatz = true);
	

};
 
