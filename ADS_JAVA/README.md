# ADS

## Array

- As in most programming languages, you can’t change the size of an array after it’s been created.

### Ordered Array
- Are useful when searches are frequent
- Insertions take longer

## Search
- Binary > Linear
- Binary formula --> r = 2^s
  - r = range
  - s = steps

## Big O Notation
- Insertion requires the same amount of time no matter how big N. We can say that the time, T, to insert an item into an unsorted array is a constant K.
    - T = K
    - O(1)
- Insertion in Ordered Array
    - O(N)
- Deletion in Unordered Array
    - O(N)
- Deletion in Ordered Array
    - O(N)
- Linear search. This equation says that average linear search times are proportional to the size of the array. If an array is twice as big, searching it will take twice as long.
    - T = K*N
    - O(N)
- Binary Search
    - T = K * log2(N)
    - O(log N)

### Graph comparision
Based on this graph, we might rate the various Big O values (very subjectively) like this: O(1) is excellent, O(log N) is good, O(N) is fair, and O(N2) is poor. 