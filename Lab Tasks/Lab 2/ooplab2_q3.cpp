/*
Name: Arwa Feroze
ID: 23k-0022
*/

#include <iostream>

using namespace std;

bool hasSubsetSum(int arr[], int size, int targetSum) {
	
    if (targetSum == 0) //  target sum reached
        return true;
    if (size == 0)      //  no elements left 
        return false;

    //element is greater than the target sum
    if (arr[size - 1] > targetSum)
        return hasSubsetSum(arr, size - 1, targetSum);

    // Recur (including or excluding the last element)
    return hasSubsetSum(arr, size - 1, targetSum) || 
           hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 9;

    if (hasSubsetSum(arr, size, targetSum))
        cout << "Subset with sum " << targetSum << " exists." << endl;
    else
        cout << "Subset with sum " << targetSum << " does not exist." << endl;

    return 0;
}

