#include <iostream>

int testWhile() {
	int sum = 0, val = 1;
	while (val <= 10)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is"
		<< sum << std::endl;
	return 0;
}

int testFor(int n) {
	int sum = 0;
	int value = 1;
	for (int i = 1; i < n; ++i) {
		sum += i;
	}
	std::cout << "Sum of 1 to" << n << "colusive is"
		<< sum << std::endl;
	return 0;
}

int addNum() {
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is:" << sum << std::endl;
	return 0;
}

int ifTest() {
	int currVal, val = 0;
	if (std::cin >> currVal) {//输入值
		int cnt = 1;//计数器
		while (std::cin >> val)//将值存入 val
		{
			if (val == currVal)
				++cnt;
			else
			{
				std::cout << currVal << "occurs"
					<< cnt << "times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << "occurs"
			<< cnt << "times" << std::endl;
	}
	return 0;
}

int main()
{
	//testFor(10);
		//addNum();
	ifTest();
}