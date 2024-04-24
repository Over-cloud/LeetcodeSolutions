#include "open_the_lock.h"

#include <queue>

namespace OpenTheLock {
	int openLock(vector<string>& deadends, string target) {
		string start = "0000";

		unordered_set<string> visited(deadends.begin(), deadends.end());

		queue<string> queue;
		if (visited.find(start) == visited.end()) queue.push(start);

		int turns = 0;
		while (!queue.empty()) {
			int size = queue.size();
			while (size-- > 0) {
				string curr = queue.front();
				if (curr == target) {
					return turns;
				}
				queue.pop();

				for (auto& next : getNext(curr, visited)) {
					visited.insert(next);
					queue.push(next);
				}
			}
			turns += 1;
		}

		return -1;
	}
}