#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	double t = -1.7, R = 0.3, p0 = 0.9, h = 0.3, pi = 3.14, x, p, k, a, s = 0;
	int M = 11, N = 5;
	if (t + 1 > R)
	{
		x = sin(3 / (pi * t));
	}
	else
	{
		x = cos(pi + t);
	}
	for (int i = 0; i <= M; i++)
	{
		p = p0 + (i - 1) * h;
		cout << "p=" << p << endl;
		a = x * exp(p) / (6 * p + 6);
		cout << "a=" << a << endl;
		if (a < 0)
		{
			s = a;
		}
		else
		{
			s = 0;
		}
		for (int k = 2; k <= N; k++)
		{
			a = - a * pow(x, 2) * exp(p) / ((p + 1) * (k + 2));
			cout << "a1=" << a << endl;
			if (a < 0)
			{
				s += a;
			}
		}
		cout << "s=" << s << endl;
	}
}