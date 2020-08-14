///ö����ͷ�ļ�����������˽���ֶκ͹�������
#pragma once
#include <string>
#include <vector>
using namespace std;
class CombinationIteratorL
{
/// <summary>
/// �������ⷽ���������˹��췽�� CombinationIterator(string characters, int combinationLength)��next() �� hasNext()
/// ���β���ͷ�ļ���ʵ�־��巽����ʹ��ʵ�����ļ���ʵ�־��巽��
/// </summary>
public:
    CombinationIteratorL(string characters, int combinationLength);

    string next();

    bool hasNext();

/// <summary>
/// ˽�в��֣��ⲿ������ļ��޷�����
/// </summary>
private:
    /// <summary>
    /// ��ö��ֵ
    /// </summary>
    vector<string> items;

    /// <summary>
    /// ��ö�ٸ���
    /// </summary>
    int count = 0;

    /// <summary>
    /// ��ǰ��ö��ֵ������
    /// </summary>
    int index = 0;
};

