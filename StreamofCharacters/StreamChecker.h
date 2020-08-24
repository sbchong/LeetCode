#pragma once
#include <string>
#include <vector>
using namespace std;

class StreamChecker
{
public:
    StreamChecker(vector<string>& words);

    bool query(char letter);

private:
    vector<char*> itemPoints;

    //��ʱ���Բ���
    vector<string> items;
};

