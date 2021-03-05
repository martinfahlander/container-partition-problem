# Container partition problem
Calculates optimal partitioning of item weights within two containers by comparing all possible combinations one at a time. Each comparison only stores its best result, which allows for less memory to be used. Otherwise the potentially large sum of item could mean large looped computations taking up a lot of memory.

# Input
Input syntax:
```
number_of_items weight_of_item_1 weight_of_item_2 weight_of_item_3 
```
Input example
```
5 343 234 194 643 405
```


X A B C\
X: Number of items to be partitioned.\
A, B, C: Weights of items.\
Example: "4 543 654 876 543"

# Output
Output syntax:
```
weight_of_container_1 weight_of_container_2
```
Output example
```
5 343 234 194 643 405
```

Output:\
Cx Cy\
Cx, Cy: Total weight of container X and Y, optimally partitioned. Heaviest container always listed first.\
Example: "1419 1197"
