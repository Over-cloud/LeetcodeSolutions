#include "compare_version_numbers.h"

namespace CompareVersionNumbers {
	int compareVersion(string version1, string version2) {
		vector<int> ver1, ver2;
		parse(version1, ver1);
		parse(version2, ver2);

		return compareVersion(ver1, ver2);
	}

	// Parse version string into vector of integers
	void parse(const string& version, vector<int>& arr) {
		if (version.empty()) return;

		size_t pos = 0;
		while (pos != string::npos) {
			size_t next = version.find_first_of('.', pos);
			string num = version.substr(pos, next - pos);
			arr.push_back(stoi(num));
			pos = (next == string::npos) ? next : next + 1;
		}
	}

	// Compare two version vectors
	int compareVersion(vector<int>& ver1, vector<int>& ver2) {
		size_t maxSize = max(ver1.size(), ver2.size());
		for (size_t i = 0; i < maxSize; ++i) {
			int v1 = (i < ver1.size()) ? ver1[i] : 0;
			int v2 = (i < ver2.size()) ? ver2[i] : 0;

			if (v1 < v2) return -1;
			if (v1 > v2) return 1;
		}

		return 0;
	}
}
