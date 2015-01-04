#include "Vector2.h"

Vector2::Vector2(double x, double y)
{
	vector[0] = x;
	vector[1] = y;
}


Vector2::~Vector2()
{
}

double Vector2::dotProduct(Vector2 vector2)
{
	return (vector[0] * vector2.getX()) + (vector[1] * vector2.getY());
}

Vector2 Vector2::crossProduct()
{
	return Vector2(vector[1], -vector[0]);
}

double Vector2::crossProduct(Vector2 vector2)
{
	return (vector[0] * vector2.getY()) - (vector[1] * vector2.getX());
}

double* Vector2::getVector()
{
	return vector;
}

double Vector2::getX()
{
	return vector[0];
}

double Vector2::getY()
{
	return vector[1];
}
