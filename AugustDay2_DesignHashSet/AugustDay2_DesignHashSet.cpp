// AugustDay2_DesignHashSet.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect;
	int i = 0;

	vect.reserve(10);

	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(5);
	vect.push_back(6);
	vect.push_back(7);
	vect.push_back(8);                               // 此时vect的size大小为8

	cout << vect.size() << endl;
	cout << vect.capacity() << endl;

	vect.resize(6);                                   // 此处设置vect的大小比当前vect中元素数量小，且没有指定初始化值
	cout << "size1 = " << vect.size() << endl;
	cout << "capacity1 = " << vect.capacity() << endl;

	for (i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}
	vect.resize(4, 10);                              // 此处设置vect的大小为4，比前面的6小，且指定了初始化值，看是否会改变前四个元素的值

	cout << "size1_1 = " << vect.size() << endl;
	cout << "capacity1_1 = " << vect.capacity() << endl;

	for (i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}
	vect.resize(8, 7);                         // 此处设置vect的大小为8，大于当前vect的大小4，但是小于vect的当前容量10，指定初始化值为7

	cout << "size2= " << vect.size() << endl;

	cout << "capacity2 = " << vect.capacity() << endl;

	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}
	vect.resize(10);                           // 此处设置vect的大小为10，大于当前vect的大小8，但是等于vect的当前容量10，没有指定初始化值，采用默认值

	cout << "size3 = " << vect.size() << endl;
	cout << "capacity3 = " << vect.capacity() << endl;

	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}
	vect.resize(12, 77);                 // 此处设置vect的大小为10，不仅大于当前vect的大小10，还大于vect的当前容量10，会为vect重新分配存储空间

	cout << "size4 = " << vect.size() << endl;
	cout << "capacity4 = " << vect.capacity() << endl;

	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}


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
