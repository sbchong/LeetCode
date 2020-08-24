#include "StreamChecker.h"

StreamChecker::StreamChecker(vector<string>& words) {
	if (1 <= words.size() <= 2000)
		for (int i = 0; i < words.size(); i++) {
			int j = words[i].length();
			if (1 <= j <= 2000) {
				char* p =  &words[i][j - 1];
				itemPoints.push_back(p);
			}
		}
}

bool StreamChecker::query(char letter) {
	for (char* p : itemPoints)
		if (*p == letter)
			return true;
	return false;
}