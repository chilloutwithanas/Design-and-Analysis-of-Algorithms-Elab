// Given number of pages in n different books and m students. The books are arranged in ascending order of number of pages.

// Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Take Number of books, n, number of pages in n books and the number of students, m as input.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int curr_min)
{
    int studentsRequired = 1;
    int curr_sum = 0;

    // iterate over all books
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > curr_min)
            return false;

        if (curr_sum + arr[i] > curr_min)
        {

            studentsRequired++;

            curr_sum = arr[i];

            if (studentsRequired > m)
                return false;
        }

        else
            curr_sum += arr[i];
    }
    return true;
}

int findPages(int arr[], int n, int m)
{
    long long sum = 0;

    if (n < m)
        return -1;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    int start = 0, end = sum;
    int result = INT_MAX;

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (isPossible(arr, n, m, mid))
        {
            result = min(result, mid);

            end = mid - 1;
        }

        else

            start = mid + 1;
    }

    return result;
}

int main()
{
    int arr[10], i, k;
    int m;
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    cout << "Minimum number of pages = "
         << findPages(arr, k, m) << endl;
    return 0;
}