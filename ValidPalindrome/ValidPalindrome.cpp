// ValidPalindrome.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string s) {
    if (s == "") {
        return true;
    }

    int size = s.length();
    int flag = size - 1;

    for (int i = 0; i < size; i++) {
        if (s[i] < '0' || s[i] > '9' && s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z') {
            continue;
        }
        while (s[flag] < 48 || s[flag] > 57 && s[flag] < 'A' || s[flag] > 'Z' && s[flag] < 'a' || s[flag] > 'z') {
            flag--;
        }

        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        if (s[flag] >= 'A' && s[flag] <= 'Z') {
            s[flag] += 32;
        }

        if (s[i] != s[flag]) {
            return false;
        }
        flag--;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    std::cout << IsPalindrome(s) ? "success" : "faild";
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
