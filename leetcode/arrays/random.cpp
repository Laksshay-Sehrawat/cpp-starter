#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        // sort(arr,arr+n);
        // cases 1 - greatest -ve, least positive,
        int max_abs = INT_MIN, min_elem = INT_MAX, max_positive = INT_MIN, negative_hai_flag = 0;
        for (int i = 0; i < n; ++i)
        {
            if (abs(arr[i]) > max_abs)
                max_abs = abs(arr[i]);
            if (arr[i] > max_positive)
                max_positive = arr[i];
            if (arr[i] < min_elem)
                min_elem = arr[i];
            if (arr[i] < 0)
                negative_hai_flag = 1;
        }
        if (negative_hai_flag == 1)
        {
            cout << min_elem * max_positive << " " << max_abs * max_abs << endl;
        }
        else
        {
            cout << min_elem * min_elem << " " << max_abs * max_abs << endl;
        }
    }
    return 0;
}
