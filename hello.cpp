#include <iostream>
using namespace std;

class Swapper
{
public:
	int x, y, t;

	Swapper(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void swap()
	{
		t = x;
		x = y;
		y = t;
		cout << x << " " << y << endl;
	}
};

int main()
{
	int num1, num2;
	cout << "emter two numbers" << endl;
	cin >> num1 >> num2;
	Swapper obj(num1, num2);
	obj.swap();
	return 0;
}
