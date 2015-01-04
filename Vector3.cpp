#include "Vector3.h"


Vector3::Vector3(double x, double y, double z)
{
	vector[0] = x;
	vector[1] = y;
	vector[2] = z;
}


Vector3::~Vector3()
{
}

double Vector3::dotProduct(Vector3 vector2)
{
	return (vector[0] * vector2.getX()) + (vector[1] * vector2.getY()) + (vector[2] * vector2.getZ());
}

Vector3 Vector3::crossProduct(Vector3 vector2)
{
	return Vector3((vector[1] * vector2.getZ()) - (vector[2] * vector2.getY()), (vector[2] * vector2.getX()) - (vector[0] * vector2.getZ()), (vector[0] * vector2.getY()) - (vector[1] * vector2.getX()));
}

double* Vector3::getVector()
{
	return vector;
}

double Vector3::getX()
{
	return vector[0];
}

double Vector3::getY()
{
	return vector[1];
}

double Vector3::getZ()
{
	return vector[2];
}
