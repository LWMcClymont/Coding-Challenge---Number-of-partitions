#include <iostream>
#include <map>
#include <vector>

using namespace std;

int solve(vector<int>& A, int& N);
int sumPartition(vector<int>& A, int from, int to);

int main()
{
	int T = 0;
	cin >> T;

	int* N = new int[T];
	vector<vector<int>> A = vector<vector<int>>((T));

	for (int i = 0; i < T; ++i)
	{
		cin >> N[i];

		for (int j = 0; j < N[i]; ++j)
		{
			int temp = 0;
			cin >> temp;
			A[i].push_back(temp);
		}
	}

	cout << "\nOutput:\n";
	for (int i = 0; i < T; ++i)
	{
		cout << solve(A[i], N[i]) << endl;
	}

	delete[] N;

	return 0;
}

int solve(vector<int>& A, int& N)
{
	int curPartitionCount = 0;

	for (int i = -1; i < (N - 1); ++i)
	{
		map<int, int> partitionCounts = map<int, int>();

		if (i >= 0 && A[i] == 0)
		{
			continue;
		}
		vector<int> temp = A;

		if (i >= 0)
			temp[i] = 0;

		for (int j = 1; j <= (N - 1); ++j)
		{
			int LHS = sumPartition(temp, 0, (j - 1));
			int RHS = sumPartition(temp, j, (N - 1));

			if (LHS == RHS)
			{
				partitionCounts[LHS] = partitionCounts[LHS] + 1;

				if (partitionCounts[LHS] > curPartitionCount)
				{
					curPartitionCount = partitionCounts[LHS];
				}
			}
		}
	}

	return curPartitionCount;
}

int sumPartition(vector<int>& A, int from, int to)
{
	int sum = 0;
	
	for (int i = from; i <= to; ++i)
	{
		sum += A[i];
	}

	return sum;
}