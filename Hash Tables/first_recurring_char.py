def find_the_recurring_character(nums: list):
    dicio = {}
    for i in range(len(nums)):
        if nums[i] in dicio:
            return nums[i]
        dicio[nums[i]] = True

    return False

array = [2,5,1,2,3,1,2,4]
print(find_the_recurring_character(array))
