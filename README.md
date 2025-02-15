# Sorting Algorithms

## Introduction
This repository contains implementations of various sorting algorithms in different programming languages. Sorting is a fundamental concept in computer science and is widely used in various applications, such as searching, data analysis, and optimization.

## Implemented Algorithms
The following sorting algorithms are included in this repository:

1. **Bubble Sort** - A simple comparison-based algorithm that repeatedly swaps adjacent elements if they are in the wrong order.
2. **Selection Sort** - Selects the smallest element from the unsorted portion and swaps it with the first unsorted element.
3. **Insertion Sort** - Builds a sorted array one element at a time by inserting elements into their correct position.
4. **Merge Sort** - A divide-and-conquer algorithm that splits the array into halves, sorts them recursively, and merges them back together.
5. **Quick Sort** - A fast divide-and-conquer algorithm that selects a pivot, partitions the array, and sorts the partitions recursively.
6. **Heap Sort** - Uses a binary heap data structure to sort elements efficiently.
7. **Radix Sort** - A non-comparative sorting algorithm that groups numbers by individual digits.
8. **Counting Sort** - Suitable for sorting integers within a specific range using frequency counting.


## Usage
To use or test the sorting algorithms, clone the repository and run the corresponding script in your preferred programming language.

```sh
# Clone the repository
$ git clone https://github.com/your-username/sorting-algorithms.git
$ cd sorting-algorithms
```

Execute a sorting script in Python:
```sh
$ python bubble_sort.py
```

## Performance Comparison
| Algorithm      | Best Case  | Average Case | Worst Case  | Space Complexity |
|---------------|-----------|--------------|-------------|------------------|
| Bubble Sort   | O(n)      | O(n²)        | O(n²)       | O(1)             |
| Selection Sort| O(n²)     | O(n²)        | O(n²)       | O(1)             |
| Insertion Sort| O(n)      | O(n²)        | O(n²)       | O(1)             |
| Merge Sort    | O(n log n)| O(n log n)   | O(n log n)  | O(n)             |
| Quick Sort    | O(n log n)| O(n log n)   | O(n²)       | O(log n)         |
| Heap Sort     | O(n log n)| O(n log n)   | O(n log n)  | O(1)             |
| Radix Sort    | O(nk)     | O(nk)        | O(nk)       | O(n + k)         |
| Counting Sort | O(n + k)  | O(n + k)     | O(n + k)    | O(k)             |

## Contributing
Contributions are welcome! If you have an improvement or want to add a new sorting algorithm, feel free to fork the repository and submit a pull request.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## References
- [Sorting Algorithms - GeeksforGeeks](https://www.geeksforgeeks.org/sorting-algorithms/)
- [Sorting Algorithm Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)


