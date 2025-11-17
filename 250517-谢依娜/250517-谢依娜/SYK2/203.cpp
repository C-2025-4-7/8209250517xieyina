#include<iostream>
using namespace std;

int main()
{
	double a, b, c;

	cout << "请输入三角形的三条边：";
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
	{
		double perimeter = a + b + c;
		cout << "三角形的周长为：" << perimeter << endl;

		if (a == b || a == c || b == c)
		{
			cout << "这是一个等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不能构成三角形" << endl;
	}

	return 0;
}