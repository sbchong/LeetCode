///枚举类头文件，用来定义私有字段和公开方法
#pragma once
#include <string>
#include <vector>
using namespace std;
class CombinationIteratorL
{
/// <summary>
/// 公开对外方法，包含了构造方法 CombinationIterator(string characters, int combinationLength)，next() 和 hasNext()
/// 本次不在头文件中实现具体方法，使用实现类文件来实现具体方法
/// </summary>
public:
    CombinationIteratorL(string characters, int combinationLength);

    string next();

    bool hasNext();

/// <summary>
/// 私有部分，外部类或者文件无法访问
/// </summary>
private:
    /// <summary>
    /// 可枚举值
    /// </summary>
    vector<string> items;

    /// <summary>
    /// 可枚举个数
    /// </summary>
    int count = 0;

    /// <summary>
    /// 当前可枚举值的索引
    /// </summary>
    int index = 0;
};

