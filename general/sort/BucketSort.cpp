#include <iostream>
#include <vector>
#include <algorithm>
// STABLE SORT
void bucketSort(std::vector<float> &arr)
{
    int n = arr.size();
    if (n <= 1)
    {
        return;
    }

    // Create empty buckets
    std::vector<std::vector<float>> buckets(n);

    // Put elements into buckets
    for (int i = 0; i < n; i++)
    {
        int bucketIndex = n * arr[i];
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; i++)
    {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate all buckets into arr
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < buckets[i].size(); j++)
        {
            arr[index++] = buckets[i][j];
        }
    }
}

int main()
{
    std::vector<float> arr = {0.4, 0.1, 0.6, 0.3, 0.2, 0.9, 0.8, 0.7, 0.5};

    std::cout << "Before sorting: ";
    for (float num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bucketSort(arr);

    std::cout << "After sorting: ";
    for (float num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
