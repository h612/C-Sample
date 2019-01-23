/* REVISE C++


0-1 Knapsack Problem | DP-10

Given weights and values of n items, put these items in a knapsack of capacity W to get the ...
maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and ...
wt[0..n-1] which represent values and weights associated with n items respectively. Also given ...
an integer W which represents knapsack capacity, find out the maximum value subset of val[] ...
such that sum of the weights of this subset is smaller than or equal to W. You cannot break ...
an item, either pick the complete item, or don’t pick it (0-1 property).

*/

#include "pch.h"
#include <iostream>
using namespace std; 
#include <stdio.h>

int knapsack(int val[], int wt[], int n, int W)
{
	// base case
	if (n <= 0)
	{
		return 0;
	}
	if (wt[n - 1] > W)
	{
		return knapsack(val, wt, n - 1, W);
	}
	int totalWValue;
	int maxvale=0, ir = 0;
	for (int i = 0; i <= n; i++)
	{
		totalWValue = wt[i] + val[i];
		if (totalWValue > maxvale&& wt[i]<W)
		{
			maxvale= totalWValue; ir = i;
		}

	}
	return maxvale;

}
int main() {
	//code
	int val[] = { 60,100,120 };
	int wt[] = { 10,20,60 };
	int W = 50; int n = sizeof(wt) / sizeof(wt[0]);
	printf("Top Value Packagable: %d", knapsack(val, wt, n, W));
	//	return 0;
}
