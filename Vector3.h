#pragma once
class Vector3
{
public:
public:
	Vector3(double x, double y, double z);
	~Vector3();
	double Vector3::dotProduct(Vector3 vector2);
	Vector3 Vector3::crossProduct(Vector3 vector2);
	double* Vector3::getVector();
	double Vector3::getX();
	double Vector3::getY();
	double Vector3::getZ();
	Vector3& operator+=(const Vector3& rhs)
	{
		vector[0] += rhs.vector[0];
		vector[1] += rhs.vector[1];
		vector[2] += rhs.vector[2];
		return *this;
	}

	friend Vector3 operator+(Vector3 lhs, const Vector3& rhs)
	{
		return lhs += rhs;
	}

	Vector3& operator-=(const Vector3& rhs)
	{
		vector[0] -= rhs.vector[0];
		vector[1] -= rhs.vector[1];
		vector[2] -= rhs.vector[2];
		return *this;
	}

	friend Vector3 operator-(Vector3 lhs, const Vector3& rhs)
	{
		return lhs -= rhs;
	}

	Vector3& operator*=(double rhs)
	{
		vector[0] *= rhs;
		vector[1] *= rhs;
		vector[2] *= rhs;
		return *this;
	}

	friend Vector3 operator*(Vector3 lhs, double rhs)
	{
		return lhs *= rhs;
	}

	Vector3& operator/=(double rhs)
	{
		vector[0] /= rhs;
		vector[1] /= rhs;
		vector[2] /= rhs;
		return *this;
	}

	friend Vector3 operator/(Vector3 lhs, double rhs)
	{
		return lhs /= rhs;
	}

private:
	double vector[3];
};

