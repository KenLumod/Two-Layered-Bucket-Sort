
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>

using namespace std;


void insertionSort(vector<int>& arr);
void twoLayerBucketSort(vector<int>& arr);

int main() {
    int dataSize = 10000; // Number of data elements
    int minValue = 1;       // Minimum value for random numbers
    int maxValue = 1000;   // Maximum value for random numbers

    // Generate random data
    vector<int> data(dataSize);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(minValue, maxValue);
    for (int i = 0; i < dataSize; ++i) {
        data[i] = dis(gen);
    }

    // Sort the data
    twoLayerBucketSort(data);

    // Print the sorted data
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void twoLayerBucketSort(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return;

    // Create primary buckets
    vector<int> lowerBucket, upperBucket;

    for (int num : arr) {
        if (num <= 50) {
            lowerBucket.push_back(num);
        } else {
            upperBucket.push_back(num);
        }
    }

    // Function to sort each primary bucket with sub-bucketing
    auto sortPrimaryBucket = [](vector<int>& bucket) {
        int size = bucket.size();
        if (size <= 1) return;

        int numSubBuckets = sqrt(size);
        vector<vector<int>> subBuckets(numSubBuckets);

        int minVal = *min_element(bucket.begin(), bucket.end());
        int maxVal = *max_element(bucket.begin(), bucket.end());
        int range = maxVal - minVal + 1;

        for (int num : bucket) {
            int index = (num - minVal) * numSubBuckets / range;
            subBuckets[index].push_back(num);
        }

        // Sort each sub-bucket using insertion sort
        bucket.clear();
        for (auto& subBucket : subBuckets) {
            insertionSort(subBucket);
            bucket.insert(bucket.end(), subBucket.begin(), subBucket.end());
        }
    };

    sortPrimaryBucket(lowerBucket);
    sortPrimaryBucket(upperBucket);

    // Combine the sorted primary buckets
    arr.clear();
    arr.insert(arr.end(), lowerBucket.begin(), lowerBucket.end());
    arr.insert(arr.end(), upperBucket.begin(), upperBucket.end());
}