# Two-Layered-Bucket-Sort

Two-Layered Bucket Sort is an enhanced version of the traditional bucket sort, designed to improve performance, particularly on large data sets. This approach leverages a two-layered structure of buckets to handle data more efficiently, demonstrating superior performance compared to traditional sorting algorithms like merge sort for large-scale data.
The primary goal of this algorithm is to address the limitations of traditional bucket sort by introducing an additional layer of sub-buckets within each primary bucket. This refinement aims to reduce sorting overhead within each bucket, ensuring better distribution and faster sorting.

How It Works

Primary Bucketing:

The data is first divided into two primary buckets based on a threshold value (e.g., 50 in this implementation). Numbers below or equal to the threshold go into the lower bucket, while the rest go into the upper bucket.
Sub-Bucketing:

Each primary bucket is further divided into sub-buckets based on the data's range within that bucket. The number of sub-buckets is determined by the square root of the bucket size, ensuring that the data is distributed more evenly across smaller, manageable segments.
Sorting Within Sub-Buckets:

Sub-buckets are sorted individually using insertion sort, a simple and efficient sorting algorithm for small data sets. This choice ensures minimal overhead and leverages the natural advantages of insertion sort for nearly sorted or localized data.
Merging:

After sorting, all sub-buckets within a primary bucket are merged back. Finally, the sorted lower bucket is concatenated with the sorted upper bucket to produce the fully sorted data.
Technologies Used

Programming Language: C++
Random Data Generation: Utilized the C++ Standard Library's random_device, mt19937, and uniform_int_distribution to create a large dataset of random numbers.
Sorting Mechanism: Combines the bucket sort paradigm with insertion sort for efficient internal sorting.
Mathematical Operations: Uses range calculations and square roots to optimize sub-bucket allocation.
Advantages Over Traditional Sorting Algorithms

Improved Performance on Large Data Sets: The two-layered structure reduces the inefficiencies of single-layer bucket sort by better handling data distributions.
Efficiency: Insertion sort's localized efficiency complements the bucket sort's divide-and-conquer approach, leading to faster sorting times for sub-divided segments.
Scalability: By intelligently allocating sub-buckets, the algorithm can handle a wide range of input sizes effectively.
Performance
In experimental studies, the Two-Layered Bucket Sort has shown promising results, outperforming traditional merge sort in large datasets due to its optimized handling of data partitions and reduced sorting overhead within each bucket.
