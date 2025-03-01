#include<iostream>
using namespace std;

int RodCutting(int* price, int n) {
    int dp[n + 1];  
    dp[0] = 0;  

   
    for (int i = 1; i <= n; i++) {
        dp[i] = 0; 
        for (int j = 1; j <=i; j++) {
            dp[i] = max(dp[i], price[j] + dp[i - j ]);
        }
    }

    return dp[n];
}

int main() {
    int price[] = {0,1, 5, 8, 9, 11, 14}; 
    int n =4;
    cout << "Maximum profit for rod of length " << n << " is: " << RodCutting(price, n) << endl;
    return 0;
}