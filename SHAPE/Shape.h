#ifndef Shape_H
#define Shape_H

class SHAPE{

public:
	virtual void name() = 0;
	virtual void perimeter(float) = 0;
	virtual void area(float) = 0;
	virtual void draw() = 0;


};
#endif