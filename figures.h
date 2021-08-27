#ifndef _FIGURES.H
#include <iostream>
#include <vector>
using namespace std;

class Figure
{
public:
	virtual void paint() const = 0;
	virtual vector<float> getParam() const = 0;
	virtual void setParam(vector<float>& vec) = 0;
};

class Line : public Figure
{
	float a;
public:
	Line(vector<float> vec);
	vector<float> getParam() const;
	void setParam(vector<float>& vec);
	void paint() const;
	~Line();
};

class Triangle : public Figure
{
	float a;
public:
	Triangle(vector<float> vec);
	vector<float> getParam() const;
	void setParam(vector<float>& vec);
	void paint() const;
	~Triangle();
};

class Rectangle : public Figure
{
protected:
	float a;
	float b;
public:
	Rectangle(vector<float> vec);
	vector<float> getParam() const;
	void setParam(vector<float>& vec);
	void paint() const;
	~Rectangle();
};
#endif // !_FIGURES.H