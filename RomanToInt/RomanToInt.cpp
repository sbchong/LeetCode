// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

int romanToIntL(string s) {
    int result = 0;

    int index = s.length() - 1;

    while (index >= 0)
    {
        if (index == s.length() - 1) {
            switch (s[index])
            {
            case 'I':result += 1;break;
            case 'V': result += 5; break;
            case 'X':result += 10;break;
            case 'L': result += 50; break;
            case 'C':result += 100;break;
            case 'D': result += 500; break;
            case 'M': result += 1000; break;
            }
        }
        else {
            switch (s[index])
            {
            case 'I':
                if (s[index + 1] == 'V' || s[index + 1] == 'X')
                {
                    result -= 1;
                }
                else
                {
                    result += 1;
                }

                break;
            case 'V': result += 5; break;
            case 'X':
                if (s[index + 1] == 'L' || s[index + 1] == 'C')
                {
                    result -= 10;
                }
                else
                {
                    result += 10;
                }

                break;
            case 'L': result += 50; break;
            case 'C':
                if (s[index + 1] == 'D' || s[index + 1] == 'M')
                {
                    result -= 100;
                }
                else
                {
                    result += 100;
                }

                break;
            case 'D': result += 500; break;
            case 'M': result += 1000; break;
            }
        }
        index--;
    }

    return result;
}

int main()
{
    std::cout << "---------------start--------------\n";
    string s;
    while (true) {
        getline(cin, s);
        cout << romanToIntL(s)<<"\n";
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
