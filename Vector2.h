#pragma once

class Vector2

{
public:
	Vector2(double x, double y);
	~Vector2();
	double Vector2::dotProduct(Vector2 vector2);
	Vector2 Vector2::crossProduct();
	double Vector2::crossProduct(Vector2 vector2);
	double* Vector2::getVector();
	double Vector2::getX();
	double Vector2::getY();
	Vector2& operator+=(const Vector2& rhs)
	{                       
		vector[0] += rhs.getX;
		vector[1] += rhs.getY;
		return *this; 
	}

	friend Vector2 operator+(Vector2 lhs, const Vector2& rhs)
	{
		return lhs += rhs;
	}

	Vector2& operator-=(const Vector2& rhs)
	{
		vector[0] -= rhs.getX;
		vector[1] -= rhs.getY;
		return *this;
	}

	friend Vector2 operator-(Vector2 lhs, const Vector2& rhs)
	{
		return lhs -= rhs;
	}

	Vector2& operator*=(double rhs)
	{
		vector[0] *= rhs;
		vector[1] *= rhs;
		return *this;
	}

	friend Vector2 operator*(Vector2 lhs, const Vector2& rhs)
	{
		return lhs *= rhs;
	}

	Vector2& operator/=(double rhs)
	{
		vector[0] /= rhs;
		vector[1] /= rhs;
		return *this;
	}

	friend Vector2 operator/(Vector2 lhs, const Vector2& rhs)
	{
		return lhs /= rhs;
	}
};

