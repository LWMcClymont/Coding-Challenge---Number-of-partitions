# Coding-Challenge---Number-of-partitions

Task:

You are given an array A of N elements. You can perform the below operation at most one time.

Operation: 
- `You can pick any element of the array and change it to 0.`
	
You are required to maximize the number of the partition of the given array such that after the partition sum of the first subarray
is equal to the sum of another subarray.

In this problem, the partition of the array is defined as dividing the given array into two contiguous
subarrays. Any two of the two subarrays in the partition can't be empty. 

Input format:

First line will contain the number of test cases(T)

For each test case:
- The first line will contain N, denoting the size of the array.
	
- The next line will contain N space-separated integers aᵢ denoting the elements of the array.
	
Output format:

For each test case print a single integer in a new line. 

Constraints:

- 1 <= T <= 10
- 1 <= N <= 10⁵
- -10⁹ <= aᵢ <= 10⁹

Example:

input:
- `1`
- `6`
- `-1 5 0 0 5 0`

Output: 
- `3`
