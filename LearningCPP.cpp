#include <iostream>
using namespace std;


class point
{
public:
	int x;
	int y;

	point();
	point(int x, int y);
	~point();

	void output()
	{
		cout << x << endl << y << endl;
	}
private:

};

point::point()
{
	x = 0;
	y = 0;

}
point::point(int x, int y)
{
	this->x = x;
	this->y = y;
}
point::~point()
{
	
}
int	main()
{
	point pt(1,2);
	pt.output();
	return 0;
}