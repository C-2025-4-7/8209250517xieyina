#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "请输入两个正整数：";
	cin >> a >> b;

	if (a <= 0 || b <= 0)
	{
		cout << "错误：请输入正整数" << endl;
		return 1;
	}

	int originalA = a;
	int originalB = b;

	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	int gcd = a;

	int lcm = (originalA * originalB) / gcd;
	cout << "最大公约数（GCD）：" << gcd << endl;
	cout << "最小公倍数（LCM）：" << lcm << endl;

	return 0;
}