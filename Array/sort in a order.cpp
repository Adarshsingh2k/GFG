/*
Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.

 

Example 1:

Input:
N = 7
Arr = {1, 2, 3, 5, 4, 7, 10}
Output:
7 5 3 1 2 4 10
Explanation:
Array elements 7 5 3 1 are odd
and sorted in descending order,
whereas 2 4 10 are even numbers
and sorted in ascending order.
 

Example 2:

Input:
N = 7
Arr = {0, 4, 5, 3, 7, 2, 1}
Output:
7 5 3 1 0 2 4
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function leftIndex() which takes the array Arr[] and its size N as inputs and modifies the array Arr[].


Expected Time Complexity: O(N. Log(N))
Expected Auxiliary Space: O(N)

 

Constraints:
1 <= N <= 106
0 <= Ai <= 1018

** For More Input/Output Examples Use 'Expected Output' option **
*/

// C++ program sort array in even and odd manner. 
// The odd numbers are to be sorted in descending 
// order and the even numbers in ascending order 
#include <bits/stdc++.h> 
using namespace std; 

// To do two way sort. First sort even numbers in 
// ascending order, then odd numbers in descending 
// order. 
void twoWaySort(int arr[], int n) 
{ 
	// Make all odd numbers negative 
	for (int i = 0; i < n; i++) {
		if (arr[i] & 1){ // Check for odd 
			arr[i] *= -1; 
        }}
	// Sort all numbers 
	sort(arr, arr + n); 

	// Retaining original array 
	for (int i = 0; i < n; i++) 
    {if (arr[i] & 1) {
    			arr[i] *= -1; }}
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 3, 2, 7, 5, 4 }; 
	int n = sizeof(arr) / sizeof(int); 
	twoWaySort(arr, n); 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 
