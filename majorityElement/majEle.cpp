#include "majEle.h"

int majEle::majorityElement(std::vector<int> &nums){
	int candidate = 0;
	int count = 0;
	for (auto num : nums) {
		if (count == 0) {
			candidate = num;
			count = 1;
		}
		else if (candidate == num) {
			count++;
		}
		else {
			count--;
		}
	}
	count = 0;
	for (auto num : nums) {
		if (num == candidate) {
			count++;
		}
	}
	return count > nums.size() / 2 ? candidate : -1;

}