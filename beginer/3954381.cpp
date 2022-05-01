// 给你一个 无重叠的 ，按照区间起始端点排序的区间列表。
//
//在列表中插入一个新的区间，你需要确保列表中的区间仍然有序且不重叠（如果有必要的话，可以合并区间）
//
//示例 1：
//
//输入：intervals = [[1,3],[6,9]], newInterval = [2,5]
//输出：[[1,5],[6,9]]
//
//示例 2：
//
//输入：intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
//输出：[[1,2],[3,10],[12,16]]
//解释：这是因为新的区间 [4,8] 与 [3,5],[6,7],[8,10] 重叠。
//
//示例 3：
//
//输入：intervals = [], newInterval = [5,7]
//输出：[[5,7]]
//
//示例 4：
//
//输入：intervals = [[1,5]], newInterval = [2,3]
//输出：[[1,5]]
//
//示例 5：
//
//输入：intervals = [[1,5]], newInterval = [2,7]
//输出：[[1,7]]
//
//提示：
//
//0 <= intervals.length <= 104
//intervals[i].length == 2
//0 <= intervals[i][0] <= intervals[i][1] <= 105
//intervals 根据 intervals[i][0] 按 升序 排列
//newInterval.length == 2
//0 <= newInterval[0] <= newInterval[1] <= 105
//
//以下程序实现了这一功能，请你填补空白处内容：
//
//#include <stdio.h>
//#include <stdlib.h>
//static int compare(const void *a, const void *b)
//{
//	return ((int *)a)[0] - ((int *)b)[0];
//}
//int **insert(int **intervals, int intervalsSize, int *intervalsColSize, int *newInterval,
//			 int newIntervalSize, int *returnSize, int **returnColumnSizes)
//{
//	int i, len = 0;
//	int *tmp = malloc((intervalsSize + 1) * 2 * sizeof(int));
//	for (i = 0; i < intervalsSize; i++)
//	{
//		tmp[i * 2] = intervals[i][0];
//		tmp[i * 2 + 1] = intervals[i][1];
//	}
//	tmp[i * 2] = newInterval[0];
//	tmp[i * 2 + 1] = newInterval[1];
//	qsort(tmp, intervalsSize + 1, 2 * sizeof(int), compare);
//	int **results = malloc((intervalsSize + 1) * sizeof(int *));
//	results[0] = malloc(2 * sizeof(int));
//	results[0][0] = tmp[0];
//	results[0][1] = tmp[1];
//	for (i = 1; i < intervalsSize + 1; i++)
//	{
//		results[i] = malloc(2 * sizeof(int));
//		if (tmp[i * 2] > results[len][1])
//		{
//			len++;
//			________________________;
//		}
//		else if (tmp[i * 2 + 1] > results[len][1])
//		{
//			results[len][1] = tmp[i * 2 + 1];
//		}
//	}
//	len += 1;
//	*returnSize = len;
//	*returnColumnSizes = malloc(len * sizeof(int));
//	for (i = 0; i < len; i++)
//	{
//		(*returnColumnSizes)[i] = 2;
//	}
//	return results;
//}
//int main(int argc, char **argv)
//{
//	if (argc < 3 || argc % 2 == 0)
//	{
//		fprintf(stderr, "Usage: ./test new_s new_e s0 e0 s1 e1...");
//		exit(-1);
//	}
//	int new_interv[2];
//	new_interv[0] = atoi(argv[1]);
//	new_interv[1] = atoi(argv[2]);
//	int i, count = 0;
//	int *size = malloc((argc - 3) / 2 * sizeof(int));
//	int **intervals = malloc((argc - 3) / 2 * sizeof(int *));
//	for (i = 0; i < (argc - 3) / 2; i++)
//	{
//		intervals[i] = malloc(2 * sizeof(int));
//		intervals[i][0] = atoi(argv[i * 2 + 3]);
//		intervals[i][1] = atoi(argv[i * 2 + 4]);
//	}
//	int *col_sizes;
//	int **results = insert(intervals, (argc - 3) / 2, size, new_interv, 2, &count, &col_sizes);
//	for (i = 0; i < count; i++)
//	{
//		printf("[%d,%d]\n", results[i][0], results[i][1]);
//	}
//	return 0;
//}
//
// Created by 鹄思鹄想_bit森 on 2022/5/1.
//
#include <stdio.h>
#include <stdlib.h>
static int compare(const void *a, const void *b)
{
	return ((int *)a)[0] - ((int *)b)[0];
}
int **insert(int **intervals, int intervalsSize, int *intervalsColSize, int *newInterval,
			 int newIntervalSize, int *returnSize, int **returnColumnSizes)
{
	int i, len = 0;
	int *tmp = static_cast<int *>(malloc((intervalsSize + 1) * 2 * sizeof(int)));
	for (i = 0; i < intervalsSize; i++)
	{
		tmp[i * 2] = intervals[i][0];
		tmp[i * 2 + 1] = intervals[i][1];
	}
	tmp[i * 2] = newInterval[0];
	tmp[i * 2 + 1] = newInterval[1];
	qsort(tmp, intervalsSize + 1, 2 * sizeof(int), compare);
	int **results = static_cast<int **>(malloc((intervalsSize + 1) * sizeof(int *)));
	results[0] = static_cast<int *>(malloc(2 * sizeof(int)));
	results[0][0] = tmp[0];
	results[0][1] = tmp[1];
	for (i = 1; i < intervalsSize + 1; i++)
	{
		results[i] = static_cast<int *>(malloc(2 * sizeof(int)));
		if (tmp[i * 2] > results[len][1])
		{
			len++;
            results[len][0] = tmp[i * 2];
            results[len][1] = tmp[i * 2 + 1];
		}
		else if (tmp[i * 2 + 1] > results[len][1])
		{
			results[len][1] = tmp[i * 2 + 1];
		}
	}
	len += 1;
	*returnSize = len;
	*returnColumnSizes = static_cast<int *>(malloc(len * sizeof(int)));
	for (i = 0; i < len; i++)
	{
		(*returnColumnSizes)[i] = 2;
	}
	return results;
}
int main(int argc, char **argv)
{
	if (argc < 3 || argc % 2 == 0)
	{
		fprintf(stderr, "Usage: ./test new_s new_e s0 e0 s1 e1...");
		exit(-1);
	}
	int new_interv[2];
	new_interv[0] = atoi(argv[1]);
	new_interv[1] = atoi(argv[2]);
	int i, count = 0;
	int *size = static_cast<int *>(malloc((argc - 3) / 2 * sizeof(int)));
	int **intervals = static_cast<int **>(malloc((argc - 3) / 2 * sizeof(int *)));
	for (i = 0; i < (argc - 3) / 2; i++)
	{
		intervals[i] = static_cast<int *>(malloc(2 * sizeof(int)));
		intervals[i][0] = atoi(argv[i * 2 + 3]);
		intervals[i][1] = atoi(argv[i * 2 + 4]);
	}
	int *col_sizes;
	int **results = insert(intervals, (argc - 3) / 2, size, new_interv, 2, &count, &col_sizes);
	for (i = 0; i < count; i++)
	{
		printf("[%d,%d]\n", results[i][0], results[i][1]);
	}
	return 0;
}
