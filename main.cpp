#include <iostream>
using namespace std;

static int n = 0;
static int *item;

pair <int, int> optimalDistribution(pair <int, int> config, int pos){ // inputs sums of items and positions in item list
    if (pos == n) // checks if analyzing last position
        return config;
    else {
        pair <int, int> alternative1 = optimalDistribution({config.first + item[pos], config.second}, pos + 1); // saves distribution of alternative 1
        pair <int, int> alternative2 = optimalDistribution({config.first, config.second + item[pos]}, pos + 1); // saves distribution of alternative 2
        if (abs(alternative1.first - alternative1.second) <= abs(alternative2.first - alternative2.second)) // returns alternative with least absolute difference
            return alternative1;
        else
            return alternative2;
    }
}   

int main () {
    bool iterate = true;
    while (iterate){  // iterate for each row of inputs
        cin >> n; // input no. of items for row
        if (n != 0){  // zero indicates end of input
            item = new int[n]; // represents the weights of items
            for (int i = 0; i < n; i++)
                cin >> item[i]; // input weight of items
            pair<int, int> container = optimalDistribution({0, 0}, 0); // receives optimal distribution of items
            if (container.first > container.second) // sorts according to size
                cout << container.first << " " << container.second << endl;
            else
                cout << container.second << " " << container.first << endl;
        }
        else
            iterate = false;
    }
    return 0;
}