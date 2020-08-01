// DetectCapital.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;


bool detectCapitalUse(string word) {
    int length = word.length() - 1;
    char* c = &word[0];

    int x = (*c >= 65 && *c <= 90) ? 0 : 1;
    c++;

    while (length > 0) {
        switch (x) {
        case 0:
            if (*c >= 65 && *c <= 90)
                c++;
            else if (*c >= 97 && *c <= 122) {
                if (length == word.length() - 1) {
                    x = 1;
                    c++;
                }
                else {
                    return false;
                }
            }
            else return false;
            break;
        case 1:
            if (*c >= 97 && *c <= 122)
                c++;
            else return false;
            break;
        }
        length--;
    }
    return true;
}

int main()
{
    string s = "FFFFFFFFFFFFFFFFFff";
    bool result = detectCapitalUse(s);
    std::cout << (result ? "success" : "faild") << endl;
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
