# Two-Layered Bucket Sort Algorithm

This program implements the **Two-Layered Bucket Sort Algorithm**, a sorting technique created by **Kenneth Lumod** and **Pamela Floriel Dubria** to improve performance by addressing uneven data distribution in traditional bucket sort. The program is written in **C++** and features a secondary layer of sub-buckets for enhanced efficiency.

---

## Overview

### Key Features:
1. **Two-Layered Bucket System**:
   - Divides data into **Primary Buckets** (Lower and Upper buckets).
   - Further subdivides these into **Sub-Buckets** based on data size.

2. **Improved Sorting Efficiency**:
   - Uses **Insertion Sort** within sub-buckets for localized sorting.
   - Handles unbalanced datasets effectively, making it more efficient for large-scale data sorting.

3. **Customizability**:
   - Provides flexibility to use other sorting algorithms like Quick Sort or Merge Sort within sub-buckets.

---

## Features

### Algorithm Workflow:
1. **Primary Bucketing**:
   - Data is divided into two main buckets: Lower and Upper.
2. **Sub-Bucketing**:
   - Each primary bucket is further divided into sub-buckets.
   - The number of sub-buckets is determined by the square root of the primary bucket's size.
3. **Sorting Sub-Buckets**:
   - Each sub-bucket is sorted using **Insertion Sort**.
4. **Combining Results**:
   - Sub-buckets are concatenated to form sorted primary buckets, which are then merged into the final sorted array.

---

## How to Run

1. **Requirements**:
   - C++ compiler (e.g., g++, clang++)
   - A development environment or command-line interface.

2. **Compilation**:
   ```bash
   g++ -o bucket_sort two_layer_bucket_sort.cpp
   ```

3. **Execution**:
   ```bash
   ./bucket_sort
   ```

4. **Output**:
   - The program will generate random data, sort it using the Two-Layered Bucket Sort Algorithm, and display the sorted results.

---

## Advantages

- **Handles Unbalanced Data**: Overcomes the inefficiencies of traditional bucket sort by redistributing data more effectively.
- **Scalable**: Performs well on large datasets with uneven distributions.
- **Customizable**: Offers flexibility in choosing the secondary sorting algorithm for sub-buckets.

---

## Documentation

For more details, refer to the comprehensive documentation:
[Two-Layered Bucket Sort Research Paper](https://drive.google.com/file/d/1LEwcoT8S8B7nJv8CY5ehj-n3OKTCDjE4/view?usp=sharing)

**Note**: While this paper outlines the details of the algorithm, it cannot be formally referenced in academic journals as it was not accepted by the chosen journal due to scope mismatches and has not yet been resubmitted to another journal.

---

## License

This program is open-source and distributed under the MIT License. Feel free to use and modify it for educational or research purposes.

