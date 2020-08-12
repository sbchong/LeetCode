// PascalTriangleII.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;
vector<int> getRow_F(int rowIndex) {
    vector<vector<int> >arr(rowIndex+1);
    for (int i = 0; i <= rowIndex; i++)
    {
        arr[i].resize(rowIndex + 1);
    }
    arr[0][0] = 1;
    for (int i = 1; i < rowIndex + 1; i++)
    {
        arr[i][0] = arr[i][rowIndex] = 1;
        for (int j = 1; j < rowIndex + 1; j++)
        {
            arr[i][j]=arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    return arr[rowIndex];
}
int main()
{
    int rowIndex = 4;
    //cout << rowIndex << endl;
    vector<int> arr = getRow(rowIndex);
    for (int i = 0; i < rowIndex + 1; i++)
    {
        cout << arr[i]<<"\t" ;
    }
    //std::cout << "Hello World!\n";
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
