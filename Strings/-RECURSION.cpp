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

My recursion Approach but as it has a time complexity of O(2^n) -->> try to Use Dyanamic Programming to get a time complexity of O(n^2)

#include <bits/stdc++.h>
#include <string>
using namespace std;

int minDeletion(string s,int i,int j){
    //base case
    if(i>=j){
        return 0;
    }
    
    if(s[i]==s[j]){
        return minDeletion(s,i+1,j-1);
    } 
        return 1+min(minDeletion(s,i,j-1),minDeletion(s,i+1,j));
    
    
    
}

int main() {
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int n=str.length();
        cout<<minDeletion(str,0,n-1)<<endl;
    }
    
	//code
	return 0;
}