#include <iostream>
#include <queue>

int main() {
    // Create a min priority queue of pairs<int, int>
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> minPriorityQueue;

    // Insert elements into the priority queue
    minPriorityQueue.push({2, 1});
    minPriorityQueue.push({2, 2});

    // Get the top element
    std::pair<int, int> topElement = minPriorityQueue.top();

    // Print the top element
    std::cout << "Top element: {" << topElement.first << ", " << topElement.second << "}" << std::endl;

    return 0;
}
