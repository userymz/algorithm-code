// (13)Romenumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include< queue>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int result = 0;
	int i;
	char j;
	bool T = false;
	queue<char> q1;
	int num = str.length();
	for (int i = 0; i < num; ++i)
	{
		q1.push(str[i]);
	}

	while (T==false)
	{
		j = q1.front();
		q1.pop();

		if (j == 'M') {
			result += 1000;
		}
		if (j == 'D') {
			result += 500;
		}
		if (j == 'V') {
			result += 5;
		}
		if (j == 'L') {
			result += 50;
		}
		if (j == 'C') {
			T = q1.empty();
			if (T == false) {
				j = q1.front();
				q1.pop();
				if (j == 'D') { result += 400; }
				else if (j == 'M') { result += 900; }
				else { result += 200; }
			}
			else { result += 100; }
		}
		if (j == 'X') {
			T = q1.empty();
			if (T == false) {
				j = q1.front();
				q1.pop();
				if (j == 'L') { result += 40; }
				else if (j == 'C') { result += 90; }
				else { result += 20; }
			}
			else { result += 10; }
		}
		if (j == 'I') {
			T = q1.empty();
			if (T == false) {
				j = q1.front();
				q1.pop();
				if (j == 'V') { result += 4; }
				else if (j == 'X') { result += 9; }
				else { result += 2; }
			}
			else { result += 1; }
		}
		T = q1.empty();
		}

	cout << result << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
