// IteratorforCombination.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

///今日挑战：设计一个自定义数据枚举器。要求 next() 方法用来获取下一个可枚举值，hasNext() 方法用来判断是否存在下一个可枚举值
/// 
/// 涉及C++面向对象编程
/// 
/// 官方建议：在一开始就生成所有可枚举的组合；最好使用位掩码运算来生成

#include <iostream>
#include "CombinationIteratorL.h"

int main()
{
    CombinationIteratorL* obj = new CombinationIteratorL("abcdefg", 5);

    //如果存在下一个枚举值，则打印
    while (obj->hasNext())
        std::cout << obj->next() << endl;
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
