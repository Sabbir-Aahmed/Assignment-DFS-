#include <iostream>
#include <stack>

using namespace std;

const int maxNodes = 5;

int graph[maxNodes][maxNodes] = {
    {0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0},
    {1, 0, 0, 1, 1},
    {1, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
};

bool visited[maxNodes] = {false};

void dfs(int numNodes, int startNode) {
    stack<int> stack;
    stack.push(startNode);
    visited[startNode] = true;

    cout << "Depth-First Traversal: ";

    while (!stack.empty()) {
        int currentNode = stack.top();
        stack.pop();
        cout << currentNode << " ";

        for (int i = 0; i < numNodes; i++) {
            if (graph[currentNode][i] && !visited[i]) {
                stack.push(i);
                visited[i] = true;
            }
        }
    }

    cout << endl;
}

int main() {
    int startNode;
    cout << "Enter the starting node (any index from 0 to " << maxNodes-1<< "): ";
    cin >> startNode;

    if (startNode < 0 || startNode >= maxNodes) {
        cout << "Starting node is invalid!\n";
        return 1;
    }

    dfs(maxNodes, startNode);

    return 0;
}
