#include <iostream>  

using namespace std;  

int knapsack(int W, int weights[], int price[], int n) 
{  
    
    int dp[n + 1][W + 1] = {0}; 

     
    for (int i = 0; i <= n; i++) {  
        for (int w = 0; w <= W; w++) {  
            if (i == 0 || w == 0) {  
                dp[i][w] = 0;   
            } else if (weights[i - 1] <= w) {  
               
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + price[i - 1]);  
            } else {  
                dp[i][w] = dp[i - 1][w]; 
            }  
        }  
    }  

  
    return dp[n][W];  
}  

int main() {  
     
    int W = 5; 
    int weights[] = {2, 3, 4, 5}; 
    int values[] = {3, 4, 5, 6}; 
    int n = 4; 
    
    int maxValue = knapsack(W, weights, values, n);  

    cout << "Maximum value that can be accommodated in the knapsack: " << maxValue << endl;  

    return 0;  
}