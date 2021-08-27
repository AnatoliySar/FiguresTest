#include "figures.h"

int main()
{
	vector<Figure*> repository;
	Line A(vector<float> {10});
	Triangle B(vector<float> {8});
	Rectangle C(vector<float> {6, 4});
	Line D(vector<float> {10});
	repository.push_back(&A);
	repository.push_back(&B);
	repository.push_back(&C);
	repository.push_back(&D);
	for (int i = 0; i < repository.size(); i++)
	{
		repository[i]->paint();
	}
	return 0;
}