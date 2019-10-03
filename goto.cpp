#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	int target;
	int sum;
	int start=-1;
	int end=-1;

	cin >> n >> target;

	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{	
		sum=0;
		for (int j = i; i < n; j++)
		{
			sum+=arr[j];
			if(sum==target)
			{
				start=i;
				end=j;
				goto xy;
			}
		}
	}

	xy:
	if(start > -1)
	{
		cout << "true" << endl;
		for (int i = start; i <= end; ++i)
		{
			cout << arr[i] << " ";
		}
	}
	else
		cout << "false";

	return 0;
}
