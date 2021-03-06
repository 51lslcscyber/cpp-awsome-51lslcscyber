// 给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 最多出现两次 ，返回删除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//
// 
//
//说明：
//
//为什么返回数值是整数，但输出的答案是数组呢？
//
//请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。
//
//你可以想象内部操作如下:
//
//// nums 是以“引用”方式传递的。也就是说，不对实参做任何拷贝
//int len = removeDuplicates(nums);// 在函数里修改输入数组对于调用者是可见的。
//// 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
//for (int i = 0; i < len; i++) {
//print(nums[i]);
//}
//
// 
//
//示例 1：
//
//输入：nums = [1,1,1,2,2,3]
//输出：5, nums = [1,1,2,2,3]
//解释：函数应返回新长度 length = 5, 并且原数组的前五个元素被修改为 1, 1, 2, 2, 3 。 不需要考虑数组中超出新长度后面的元素。
//
//示例 2：
//
//输入：nums = [0,0,1,1,1,1,2,3,3]
//输出：7, nums = [0,0,1,1,2,3,3]
//解释：函数应返回新长度 length = 7, 并且原数组的前五个元素被修改为 0, 0, 1, 1, 2, 3, 3 。 不需要考虑数组中超出新长度后面的元素。
//
// 
//
//提示：
//
//1 <= nums.length <= 3 * 104
//-104 <= nums[i] <= 104
//nums 已按升序排列
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <stdio.h>
//#include <stdlib.h>
//static int removeDuplicates(int *nums, int numsSize)
//{
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	int i;
//	int len = 0;
//	int count = 1;
//	for (i = 1; i < numsSize; i++)
//	{
//		if (nums[len] == nums[i])
//		{
//			_____________________;
//		}
//		else
//		{
//			count = 1;
//			nums[++len] = nums[i];
//		}
//	}
//	return len + 1;
//}
//int main(int argc, char **argv)
//{
//	int i, count = argc - 1;
//	int *nums = malloc(count * sizeof(int));
//	for (i = 0; i < count; i++)
//	{
//		nums[i] = atoi(argv[i + 1]);
//	}
//	count = removeDuplicates(nums, count);
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/4.
//
#include <stdio.h>
#include <stdlib.h>
static int removeDuplicates(int *nums, int numsSize)
{
	if (numsSize == 0)
	{
		return 0;
	}
	int i;
	int len = 0;
	int count = 1;
	for (i = 1; i < numsSize; i++)
	{
		if (nums[len] == nums[i])
        {
            count++;
            nums[--len] = nums[i];
		}
		else
		{
            if (count < 2)
            {
                if (count < 2)
                {
                    count++;
                    nums[++len] = nums[i];
                }
            }
		}
	}
	return len + 1;
}
int main(int argc, char **argv)
{
	int i, count = argc - 1;
	int *nums = static_cast<int *>(malloc(count * sizeof(int)));
	for (i = 0; i < count; i++)
	{
		nums[i] = atoi(argv[i + 1]);
	}
	count = removeDuplicates(nums, count);
	for (i = 0; i < count; i++)
	{
		printf("%d ", nums[i]);
		printf("");
	}
	printf("\n");
}
