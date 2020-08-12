// ExcelSheetColumnNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

///
/// Given a column title as appear in an Excel sheet, return its corresponding column number.

///For example :

///A -> 1
///B -> 2
///C -> 3
///...
///Z -> 26
///AA -> 27
///AB -> 28
///...
/// 
/// 可以将其看成26进制，转换为10进制
/// 


#include <iostream>
#include <string>
using namespace std;

int titleToNumberL(string s) {
    int length = s.length();

    if (length == 0 || length > 7)return 0;

    int result = 0;

    for (int i = 0; i < length; i++) {
        result += ((int)s[length - i - 1]-64) * pow(26,i);
    }
    return result;
}

int main()
{
    string s = "ZY";
    std::cout << titleToNumberL(s)<<endl;
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
