#pragma once
class SearchCharArray {
public:
	/**
	* Returns an index to the first occurrence of target in source,
	* or -1  if target is not part of source.
	* @param source string to be scanned.
	* @param target string containing the sequence of characters to match.
	*/
	int getPosition(const char *source, const char *target) {
		// write your code here
		if (target && !target[0]) return 0;
		else if (source && target)
			for (int i = 0, temp, j = 0; source[i]; i = temp + 1) {
				while (source[i] && source[i] != target[0])
					i++;
				if (!source[i]) return -1;
				temp = i, j = 0;
				while (source[i] && target[j] && source[i] == target[j])
					i++, j++;
				if (!target[j]) return temp;
			}
		return -1;
	}
};
