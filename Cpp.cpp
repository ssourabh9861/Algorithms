
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
int counts = 0;
// Function to find all unique combination of
// given elements such that their sum is K
void unique_combination(int l, int sum, int K,
						vector<int>& local, vector<int>& A)
{
	// If a unique combination is found
	if (sum == K) {
		//cout << "{";
		for (int i = 0; i < local.size(); i++) {
			if (i != 0)
				cout << " ";
			cout << local[i];
			if (i != local.size() - 1)
				cout << " + ";
		}
		cout << " = "<<K << endl;
		counts++;
		return;
	}

	for (int i = l; i < A.size(); i++) {

		if (sum + A[i] > K)
			continue;

		if (i and A[i] == A[i - 1] and i > l)
			continue;

		local.push_back(A[i]);

		unique_combination(i + 1, sum + A[i],
						K, local, A);

		local.pop_back();
	}
}

void Combination(vector<int> A, int K)
{
	// Sort the given elements
	sort(A.begin(), A.end());

	// To store combination
	vector<int> local;

	unique_combination(0, 0, K, local, A);
}

int main()
{
    vector<int> m;
    int val, sum;
    cin>>val>>sum;
    while(val>0)
    {
        m.push_back(val%10);
        val = val/10;
    }
    sort(m.begin(), m.end());
    cout<<"Sum of Combinations:"<<endl;
	Combination(m, sum);
	cout<<"Number of combinations that add up to "<<sum<<":"<<counts<<endl;

	return 0;
}
