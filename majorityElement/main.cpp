#include "majEle.h"
#include <iostream>
#include <vector>

std::vector<int> nums = { 1, 1, 2, 2, 2, 3, 3 };
int val = majEle::majorityElement(nums);

int main() {
	std::cout << val << std::endl;
	return 0;
}