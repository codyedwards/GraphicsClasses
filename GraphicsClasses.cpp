#include <stdio.h>
#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

using namespace std;

void testVector2()
{
	Vector2 v1 = Vector2(1, 2);
	Vector2 v2 = Vector2(3, 4);
	double n = 5;

	Vector2 v3 = v1 + v2;

	cout << "[";
	cout << v3.getX();
	cout << ", ";
	cout << v3.getY();
	cout << "]";
	cout << "\n";

	Vector2 v4 = v1 - v2;

	cout << "[";
	cout << v4.getX();
	cout << ", ";
	cout << v4.getY();
	cout << "]";
	cout << "\n";

	double num = v1.dotProduct(v2);

	cout << num;
	cout << "\n";

	Vector2 v5 = v1.crossProduct();

	cout << "[";
	cout << v5.getX();
	cout << ", ";
	cout << v5.getY();
	cout << "]";
	cout << "\n";

	double num2 = v1.crossProduct(v2);

	cout << num2;
	cout << "\n";

	Vector2 v6 = v1 * 5;

	Vector2 v7 = v1 / 5;

	cout << "[";
	cout << v6.getX();
	cout << ", ";
	cout << v6.getY();
	cout << "]";
	cout << "\n";

	cout << "[";
	cout << v7.getX();
	cout << ", ";
	cout << v7.getY();
	cout << "]";
	cout << "\n";
}

void testVector3()
{
	Vector3 v1 = Vector3(1, 2, 3);
	Vector3 v2 = Vector3(4, 5, 6);
	double n = 5;

	Vector3 v3 = v1 + v2;

	cout << "[";
	cout << v3.getX();
	cout << ", ";
	cout << v3.getY();
	cout << ", ";
	cout << v3.getZ();
	cout << "]";
	cout << "\n";

	Vector3 v4 = v1 - v2;

	cout << "[";
	cout << v4.getX();
	cout << ", ";
	cout << v4.getY();
	cout << ", ";
	cout << v4.getZ();
	cout << "]";
	cout << "\n";

	double num = v1.dotProduct(v2);

	cout << num;
	cout << "\n";

	Vector3 v5 = v1.crossProduct(v2);

	cout << "[";
	cout << v5.getX();
	cout << ", ";
	cout << v5.getY();
	cout << ", ";
	cout << v5.getZ();
	cout << "]";
	cout << "\n";

	Vector3 v6 = v1 * 5;

	Vector3 v7 = v1 / 5;

	cout << "[";
	cout << v6.getX();
	cout << ", ";
	cout << v6.getY();
	cout << ", ";
	cout << v6.getZ();
	cout << "]";
	cout << "\n";

	cout << "[";
	cout << v7.getX();
	cout << ", ";
	cout << v7.getY();
	cout << ", ";
	cout << v7.getZ();
	cout << "]";
	cout << "\n";
}

int main(int argc, char *argv[])
{
	//testVector2();

	testVector3();

	return 0;
}