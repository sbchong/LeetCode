// MergeTwoSortedLists.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
#include <iostream>
#include <vector>
using namespace std;

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    vector<int> x;
    while (l1) {
        if (l1->val > l2->val) {
            x.push_back(l2->val);
            l2 = l2->next;
        }
        else {
            x.push_back(l1->val);
            l1 = l1->next;
        }
    }
    while (l2) {
        x.push_back(l2->val);
        l2 = l2->next;
    }

    int size = x.size();
    ListNode* ln = new ListNode(0, NULL);
    while (size > 0) {
        ListNode* p = new ListNode{ x.back() ,ln->next };
        ln->next = p;
        x.pop_back();
        size--;
    }
    ln = ln->next;
    return ln;
}

 int main()
 {
     ListNode l11 = { 1,&(ListNode  { 2,&(ListNode  { 4,NULL }) }) };

     ListNode l22(1, &(ListNode{ 3,&(ListNode  { 4,NULL }) }));

     ListNode* l1 = &l11;
     ListNode* l2 = &l22;

     ListNode* ln= mergeTwoLists(l1, l2);

     std::cout << "Hello World!\n";
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
