#include<iostream>
using namespace std;
class Circle
{
public:
	Circle();
	~Circle();
	void setx(int x_coo)
	{
		x = x_coo;
	}
	void sety(int y_coo)
	{
		y = y_coo;
	}
	void setr(int r_coo)
	{
		r = r_coo;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	int getr()
	{
		return r;
	}
private:
	int x;
	int y;
	int r;
};

Circle::Circle()
{
}

Circle::~Circle()
{
}
int main()
{
	int n, x, y, r;
	char s;
	cin >> n;
	Circle* plates = new Circle[n];
	int k = 0;
	while (n--)
	{
		cin >> s;
		if (s == 'A')
		{
			cin >> x >> y >> r;
			for (int i = 0; i < k; i++)
			{
				if ()
				{

				}
			}

			//\/\/\/\/\//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\//\/\/\//\/\/\/\/\//\/\/\/\
			///////////////////////   Not completed yeeeeeeeeeeeeeeeeeeet  \\\\\\\\\\\\\\\\\\\\\\\\\\\\
			\/\/\/\/\/\/\/\//\/\/\/\/\//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\//\/\/\//\/\

			plates[k].setx(x);
			plates[k].sety(y);
			plates[k].setr(r);


		}
	}
}