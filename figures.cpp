#include "figures.h"

Line::Line(vector<float> vec)
{
	this->a = vec[0];
}

vector<float> Line::getParam() const
{
	vector<float> vec;
	vec.push_back(this->a);
	return vec;
}

void Line::setParam(vector<float>& vec)
{
	this->a = vec[0];
}

void Line::paint() const
{
	cout << "Line with lenght " << this->a << ":\n";
	for (int i = 0; i < this->a; i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << endl;
}

Triangle::Triangle(vector<float> vec)
{
	this->a = vec[0];
}

vector<float> Triangle::getParam() const
{
	vector<float> vec;
	vec.push_back(this->a);
	return vec;
}

void Triangle::setParam(vector<float>& vec)
{
	this->a = vec[0];
}

void Triangle::paint() const
{
	cout << "Triangle with height " << this->a << ":\n";
	for (int i = this->a; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}
Rectangle::Rectangle(vector<float> vec)
{
	this->a = vec[0];
	this->b = vec[1];
}

vector<float> Rectangle::getParam() const
{
	vector<float> vec;
	vec.push_back(this->a);
	vec.push_back(this->b);
	return vec;
}

void Rectangle::setParam(vector<float>& vec)
{
	this->a = vec[0];
	this->b = vec[1];
}

void Rectangle::paint() const
{
	cout << "Rectangle with height " << this->a << " and lenght " << this->b << ":\n";
	for (int i = 0; i < this->a; i++)
	{
		for (int j = 0; j < this->b; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}

Line::~Line()
{

}

Triangle::~Triangle()
{

}

Rectangle::~Rectangle()
{
	
}