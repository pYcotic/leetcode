numbers = [1,1,1,2,2,2,2,3,3,3,2,3,3,2,2]

def majorityElement(numbers):
	majority = None
	count = 0

	# first pass
	for number in numbers:
		if count == 0:
			majority = number
		if number == majority:
			count += 1
		else:
			count -= 1

	# second pass
	count = 0
	for number in numbers:
		if number == majority:
			count += 1

	return majority if count > (len(numbers) // 2) else None


print(majorityElement(numbers))

def majority_element(nums):
    majority = None
    count = 0

    # first pass
    for num in nums:
        if count == 0:
            majority = num
        if num == majority:
            count += 1
        else:
            count -= 1

    # second pass
    count = 0
    for num in nums:
        if num == majority:
            count += 1

    return majority if count > len(nums) // 2 else None

# test the function
nums = [1,1,1,2,2,2,2,3,3,3,2,3,3,2,2,2,2]
print(majority_element(nums))  # output: 2
