#include <iostream>  
#include <vector>  
#include <algorithm>  

using namespace std;  

// Function to solve the 0/1 Knapsack problem using dynamic programming  
int knapsack(int W, const vector<int>& weights, const vector<int>& values, int n) {  
    // Create a table to store the maximum value at each n and W  
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));  

    // Build the table in bottom-up manner  
    for (int i = 1; i <= n; i++) {  
        for (int w = 0; w <= W; w++) {  
            if (weights[i - 1] <= w) {  
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);  
            } else {  
                dp[i][w] = dp[i - 1][w];  
            }  
        }  
    }  

    // The maximum value is in the bottom-right corner of the table  
    return dp[n][W];  
}  

int main() {  
    // Example data  
    int W = 5; // Maximum weight capacity of the knapsack  
    vector<int> weights = {2, 3, 4, 5}; // Weights of the items  
    vector<int> values = {3, 4, 5, 6}; // Corresponding values of the items  
    int n = weights.size(); // Number of items  

    // Call the knapsack function  
    int maxValue = knapsack(W, weights, values, n);  

    // Output the result  
    cout << "Maximum value that can be accommodated in the knapsack: " << maxValue << endl;  

    return 0;  
}