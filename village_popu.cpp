#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int *varr=new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> varr[i];
	}

	for (int i = 0; i < n/2; i++)
	{
		int popu=0;
		popu = varr[i]+varr[n-i-1];
		cout << popu/10 << " " << popu%10 << endl;
	}

	return 0;
}
