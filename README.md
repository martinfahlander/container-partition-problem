# container-partition-problem
Calculates optimal partitioning of item weights within two containers by comparing all possible combinations one at a time. Each comparison only stores its best result, which allows for less memory to be used. Otherwise the potentially large sum of item could mean large looped computations taking up a lot of memory.

Input:\
X A B C\
X: Number of items to be partitioned.\
A, B, C: Weights of items.\
Example: "4 543 654 876 543"

Output:
Cx Cy
Cx, Cy: Total weight of container X and Y, optimally partitioned. Heaviest container always listed first.
Example: "1419 1197"
