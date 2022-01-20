#include "circle.h"

Circle::Circle() {
	radius = 0.0;
	x = y = 0;
};

Circle::Circle(float r, int x, int y) {
	radius = r;
	this->x = x;
	this->y = y;
};
float Circle::area() {
	return 3.141592 * radius * radius;
};
float Circle::diameter() {
	return radius * 2;
};
void Circle::setRadius(float radius) {
	if (radius > 0)
		this->radius = radius;
	else radius = 0;
};
void Circle::setOrigin(int x, int y) {
	this->x = x;
	this->y = y;
};
float Circle::getRadius() {
	return radius;
};
