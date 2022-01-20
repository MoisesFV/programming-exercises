#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	float radius;
	int x, y;
public:
	Circle();
	Circle(float, int, int);
	~Circle() { }

	float area();
	float diameter();
	void setRadius(float);
	void setOrigin(int,int);
	float getRadius();

};

#endif
