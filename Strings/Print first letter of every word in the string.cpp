/*
*********************           Print first letter of every word in the string             ******************
Given a string S, the task is to output a string with the first letter of every word in the string.
 

Example 1:

Input: geeks for geeks
Output: gfg
Explanation: First alphabet of every word 
required.
Example 2:

Input: bad is good
Output: big
Explanation: First alphabet of every word 
required.
User Task:
Your task is to complete the function firstAlphabet() which takes a single string as input and returns the string. You need not take any input or print anything.

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(|S|)

Constraints:
1 <= |S| <= 105
S contains lower case English alphabets
Words have a single space between them.

** For More Input/Output Examples Use 'Expected Output' option **
Contributor: Shubham Chaudhary
Author: Shubham Chaudhary gfg






*/

// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#include <string>
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string s)
	{
	    /*string result=" ";
	    bool flag=true;
	    for(int i=0;i<s.size();i++){
	        if(s[i] == ' '){
	            flag=true;
	        }
	        if(s[i]!= ' ' && flag==true){
	            result.push_back(s[i]);
	            flag=false;
	        }
	    }*/
	    
	    //return result;
	    
	    string res="";
	    bool f=true;
	    for(int i=0;i<s.size();i++){
	        if(s[i]== ' '){
	            f=true;
	        }
	         if(s[i]!=' ' &&  f==true){
	            res.push_back(s[i]);
	            f=false;
	        }
	    }
	    return res;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
  // } Driver Code Ends