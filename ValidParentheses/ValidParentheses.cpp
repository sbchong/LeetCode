// ValidParentheses.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
leetcode 20 Valid Parentheses

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Note that an empty string is also considered valid.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(string s) {
    int count = s.size();
    if (count % 2 != 0) {
        return false;
    }

    char* p = new char;
    int size = 0;

    for (int i = 0; i < count; i++) {
        if (s[i] == ')') {

            if (size <= 0 || *(--p) != '(')
                return false;

            size--;
        }
        else if (s[i] == ']' || s[i] == '}') {
            if (size <= 0 || *(--p) != s[i] - 2)
                return false;

            size--;
        }
        else { 
            *p = s[i];
            size++; 
            p++;
        }
    }
    if (size > 0) {
        return false;
    }
    return true;
}

bool isValid3(string s) {
    int size = s.size();
    if (size % 2 != 0) {
        return false;
    }
    vector<char> stack;
    bool result = false;
    for (int i = 0; i < size; i++) {
        if (s[i] == ')') {

            if (stack.size() <= 0 || stack[stack.size() - 1] != '(')
                return false;

            stack.pop_back();
        }
        else if (s[i] == ']' || s[i] == '}') {
            if (stack.size() <= 0 || stack[stack.size() - 1] != s[i] - 2)
                return false;

            stack.pop_back();
        }
        else {
            stack.push_back(s[i]);
        }
    }
    if (stack.size() > 0) {
        return false;
    }
    return true;
}

bool isValid2(string s) {
    int size = s.size();
    if (size % 2 != 0) {
        return false;
    }
    int next = 1;
    int index = 0;
    for (int i = 0; i < size; i += (2 * index)) {
        while (s[i + next] == '(' || s[i + next] == '[' || s[i + next] == '{' && next < size / 2) {
            next++;
        }
        index = 0;
        while (s[i + next] == ')' || s[i + next] == ']' || s[i + next] == '}' && next > 0) {
            if (s[i + index] == '(') {
                if (s[i + (2 * next) - 1 + index] != ')')
                    return false;
            }
            else {
                if (s[i + (2 * next) - 1 + index] != s[i + index] + 2)
                    return false;
            }
            next--;
            index++;
        }
    }
    return true;
}

bool isValid1(string s) {
    int size = s.size();
    if (size % 2 != 0) {
        return false;
    }
    if (size == 0) {
        return true;
    }
    int next = 0;
    bool result = false;
    for (int i = 0; i < size; i++) {
        if (s[i] == ')') {
            result = true;
            if (s[next--] != '('||next<-1)
                return false;
        }
        else if (s[i] == ']' || s[i] == '}') {
            result = true;
            if (s[next--] != s[i] - 2|| next < -1)
                return false;
        }
        else {
            result = false;
            next = i;
        }
    }
    return result;
}

int main()
{
    cout << "------------------start--------------" << endl;

    string s = "(([]){})";
    //string s = "){";
    cout << "\t" << isValid(s) << endl;
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
