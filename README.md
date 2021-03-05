# Container partition problem
Calculates optimal partitioning of item weights within two containers by comparing all possible combinations one at a time. Each comparison only stores its best result, which allows for less memory to be used. Otherwise the potentially large sum of item could mean large looped computations taking up a lot of memory.

# Input
Input syntax:
```
number_of_items weight_of_item_1 weight_of_item_2 weight_of_item_3 
```
Input example
```
4 543 654 876 543
```

# Output
Output syntax:
```
weight_of_container_1 weight_of_container_2
```
Output example
```
1419 1197
```
