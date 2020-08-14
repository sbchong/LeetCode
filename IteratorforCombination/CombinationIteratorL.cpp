///CombinationIterator类具体实现文件
/// 
#include "CombinationIteratorL.h"

/// <summary>
/// CombinationIteratorv构造方法，在该类实例化时调用
/// </summary>
/// <param name="characters">输入指定排序字符串</param>
/// <param name="combinationLength">枚举值长度</param>
CombinationIteratorL::CombinationIteratorL(string characters, int combinationLength) {
	///位掩码运算生成所有组合 ×
	
	/// 使用循环生成所有组合 ✔
	int length = characters.length();

	///范围1~15
	if ((length >= 1 && length <= 15) || (combinationLength >= 1 && combinationLength <= 15)) {
		//当组合长度为1时，则表示按顺序从0开始枚举该字符串中所有字符
		if (combinationLength == 1) {
			for (int i = 0; i < length; i++) {
				string temp;
				temp += characters[i];
				items.push_back(temp);
				count++;
			}
		}
		else {
			//首先是组合的首位字符
			for (int i = 0; i <= length - combinationLength; i++) {
				//后续字符
				for (int j = i + 1; j + combinationLength - 1 <= length; j++) {
					string temp;
					temp += characters[i];
					//长度为 2 的组合
					if (combinationLength == 2)
						temp += characters[j];
					else {
						//指定长度为 k 的组合
						for (int k = 0; k < combinationLength - 1; k++)
							temp += characters[j + k];
					}
					items.push_back(temp);
					count++;
				}
			}
		}
	}
	//当给的条件不符合时

}

/// <summary>
/// 获取下一个枚举值
/// </summary>
/// <returns>items中索引为 index-1 的字符串</returns>
string CombinationIteratorL::next(){
	index++;
	return items[index - 1];
}

/// <summary>
/// 判断是否存在下一个枚举值,判断下一个索引值是否超出范围
/// </summary>
/// <returns>true:存在 false:不存在</returns>
bool CombinationIteratorL::hasNext(){
	return (index < count) ? true : false;
}
