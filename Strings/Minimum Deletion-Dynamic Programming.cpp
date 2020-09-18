/*
***************************** Minimum Deletions *******************
Given a string of S as input. Your task is to write a program to remove or delete minimum number of characters from the string so that the resultant string is palindrome.

Note: The order of characters in the string should be maintained.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a string S.

Output:
For each test case, print the deletions required to make the string palindrome.

Constraints:
1<=T<=100
1<=length(S)<=10000

Example:
Input:
2
aebcbda
geeksforgeeks
Output:
2
8

** For More Input/Output Examples Use 'Expected Output' option **

*/

<<----------------------- A dervived approach of "Longest Pallindromic Subsequence" -------------------------->>

#include <bits/stdc++.h> 
using namespace std; 
  
// Returns the length of  
// the longest palindromic  
// subsequence in 'str' 
int lps(string str) 
{ 
    int n = str.size(); 
  
    // Create a table to store 
    // results of subproblems 
    int L[n][n]; 
  
    // Strings of length 1 
    // are palindrome of length 1 
    for (int i = 0; i < n; i++) 
        L[i][i] = 1; 
  
    // Build the table. Note that  
    // the lower diagonal values  
    // of table are useless and  
    // not filled in the process.  
    // c1 is length of substring 
    for (int cl = 2; cl <= n; cl++) 
    { 
        for (int i = 0;  
                 i < n - cl + 1; i++) 
        { 
            int j = i + cl - 1; 
            if (str[i] == str[j] && 
                        cl == 2) 
                L[i][j] = 2; 
            else if (str[i] == str[j]) 
                L[i][j] = L[i + 1][j - 1] + 2; 
            else
                L[i][j] = max(L[i][j - 1],  
                            L[i + 1][j]); 
        } 
    } 
  
    // length of longest 
    // palindromic subseq 
    return L[0][n - 1]; 
} 
  
// function to calculate  
// minimum number of deletions 
int minDeletion(string str) 
{ 
    int n = str.size(); 
  
    // Find longest palindromic  
    // subsequence 
    int len = lps(str); 
  
    // After removing characters  
    // other than the lps, we  
    // get palindrome. 
    return (n - len); 
} 
  

int main() {
    int t;
    string str;
   
    cin>>t;
    while(t--){
        cin>>str;
        int n=str.length();
        cout<<minDeletion(str)<<endl;
    }
    
	//code
	return 0;
}