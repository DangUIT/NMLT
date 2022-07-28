#include <bits/stdc++.h>
using namespace std;

int max1(int a[], int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            int thisSum = 0;
            for (int k = i; k <= j; k++)
                thisSum += a[k];
            if (thisSum > maxSum)
                maxSum = thisSum;
        }
    return maxSum;
}
int max2(int a[], int n)
{
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int thisSum = 0;
        for (int j = i; j < n; j++)
        {
            thisSum += a[j];
            if (thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}
// long long max3(int arr[], int n)
// {
//     long long sum = 0;
//     int left_sum = 0;
//     for (int i = n / 2; i >= 0; i--)
//     {
//         sum = sum + arr[i];
//         if (sum > left_sum)
//             left_sum = sum;
//     }
//     sum = 0;
//     int right_sum = 0;
//     for (int i = n / 2 + 1; i < n; i++)
//     {
//         sum = sum + arr[i];
//         if (sum > right_sum)
//             right_sum = sum;
//     }
//     return left_sum + right_sum;
// }
int max4(int a[], int n)
{
    int maxSum = 0, thisSum = 0;
    for (int j = 0; j < n; j++)
    {
        thisSum += a[j];
        if (thisSum > maxSum)
            maxSum = thisSum;
        else if (thisSum < 0)
            thisSum = 0;
    }
    return maxSum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 1000 - 500;
    }
    clock_t start1 = clock();
    cout << max1(a, n) << endl;
    clock_t end1 = clock();
    clock_t start2 = clock();
    cout << max2(a, n) << endl;
    clock_t end2 = clock();
    // clock_t start3 = clock();
    // cout << max3(a, n) << endl;
    // clock_t end3 = clock();
    clock_t start4 = clock();
    cout << max4(a, n) << endl;
    clock_t end4 = clock();
    cout << setprecision(100);
    cout << "Thoi gian 1: " << (float)(end1 - start1) / CLOCKS_PER_SEC << endl;
    cout << "Thoi gian 2: " << (float)(end2 - start2) / CLOCKS_PER_SEC << endl;
    // cout << "Thoi gian 3: " << (float)(end3 - start3) / CLOCKS_PER_SEC << endl;
    cout << "Thoi gian 4: " << (float)(end4 - start4) / CLOCKS_PER_SEC << endl;
    system("pause");
    return 0;
}
