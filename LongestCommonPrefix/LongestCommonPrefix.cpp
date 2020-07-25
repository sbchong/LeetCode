 // LongestCommonPrefix.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefixString(vector<string>& strs) {
    
    string* p = &strs[0];

    cout << *(++p) << endl;

    string result = "";

    int vectorLenght = strs.size();

    if (vectorLenght <= 0) {
        return result;
    }

    else if (vectorLenght == 1) {
        return strs[0];
    }


    for (int i = 1; i < vectorLenght; i++) {

        string flag = strs[0];

        //string s = strs[i];

        if (flag == "" || strs[i] == "") {
            return "";
        }

        if (result.length() > 0) {
            flag = result;
            result = "";
        }

        //int flagLength = flag.length();


        //char current = flag[0];
        

        /*for (int j = 0; j < sLength; j++) {
            if (current == s[j]) {
                result = current;

                int nextIndex = 1;

                while (next) {
                    if (nextIndex >= flagLength) {
                        next = false;
                    }
                    else {
                        if (flag[nextIndex] == s[j + nextIndex]) {
                            result += flag[nextIndex];
                            nextIndex++;
                        }
                        else {
                            next = false;
                        }
                    }
                }
                if (!next) {
                    break;
                }
            }
        }*/

        if (flag[0] == strs[i][0]) {
            result = flag[0];

            int nextIndex = 1; 
            bool next = true;


            while (next) {
                if (nextIndex >= flag.length()) {
                    next = false;
                }
                else {
                    if (flag[nextIndex] == strs[i][nextIndex]) {
                        result += flag[nextIndex];
                        nextIndex++;
                    }
                    else {
                        next = false;
                    }
                }
            }
        }

        if (result == "") {
            return result;
        }
    }

    return result;
}

string longestCommonPrefixString1(vector<string>& strs) {
    int size = strs.size();
    if (size <= 0) {
        return "";
    }

    else if (size == 1) {
        return strs[0];
    }

    string result = "";

    for (int i = 1; i < size; i++) {

        string flag = strs[0];

        if (flag == "" || strs[i] == "") {
            return "";
        }

        if (result.length() > 0) {
            flag = result;
            result = "";
        }

        int nextIndex = 0;

        while (flag[nextIndex] == strs[i][nextIndex] && nextIndex < flag.length()) {
            result += flag[nextIndex];
            nextIndex++;
        }

        if (result == "") {
            return result;
        }
    }
    return result;
}

string longestCommonPrefixString2(vector<string>& strs) {
    int count = strs.size();

    if (count <= 0) {
        return "";
    }

    else if (count == 1) {
        return strs[0];
    }
    string* result;
    string* p = &strs[0];
    int i = 1;
    while (i < count) {
        char* q = &(*p)[0];
        if (i != 1) 
             q = &(*result)[0];



        char *t= &(*++p)[0];

        while (*q==*t)
        {
            *result = *q;
        }
    }

}
int main()
{
    cout << "---------------------start-----------------\n";

    //vector<string> strs{ "flower","flow","flight" };

    vector<string> strs;

    longestCommonPrefixString2(strs);

    //string result = longestCommonPrefixString1(strs);

    //cout << result << "\n";
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
