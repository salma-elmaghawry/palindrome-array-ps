#include <iostream >
using namespace std;
int main()
{
	int n;
    bool flag = true;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n/2; i++)
	{
		if (arr[i] != arr[n - 1 - i])
		flag = false;
		break;

	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}