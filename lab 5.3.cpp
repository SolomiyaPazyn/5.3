#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double kp, kk, result;
	int n;
	
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;

	double dk = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{

		result = z(1 - pow(k, 2)) + pow(z(1 + z(k)),2);
		cout << k << " " << result << endl;
		k += dk;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (1 - sin(x)) / (exp(x) + pow(cos(x), 2));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = - 1 / (2 * j * (2 * j - 1));
			a *= R;
			S += a;
		} while (j < 7);
		return exp(x);
	}
}