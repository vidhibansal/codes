/*
Given a string S, find the longest palindromic substring in S.

Substring of string S:

S[i...j] where 0 <= i <= j < len(S)

Palindrome string:

A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S.

Incase of conflict, return the substring which occurs first ( with the least starting index ).

Example :

Input : "aaaabaaa"
Output : "aaabaaa"

*/

string Solution::longestPalindrome(string A) {
    
        
    string s1, s2;
    map<char, vector<int>> m1;
    vector<int> v;
    int size, max = 0;
    string ff;
    
    if (A.size() == 1)
    return(A);
    
    for (int i=0; i<A.size(); i++)
    {
        if (m1.find(A[i]) == m1.end())
        {
            v.clear();
            v.push_back(i);
            m1[A[i]] = v;
        }
        else
        {
            v.clear();
            v = m1[A[i]];
            for (int j =0; j<v.size(); j++)
            {
                if (i-v[j] > max) 
                {
                    s1 = A.substr(v[j], i-v[j]+1);
                    s2 = s1;
                    reverse(s1.begin(), s1.end());
                    if (s1 == s2)
                    {
                        ff = s2;
                        max = i-v[j];
                    }
                }
            }
            v.push_back(i);
            m1[A[i]] = v;
        }
    }
    if (max == 0)
    {
        s1 = A[0];
        return(s1);
    }
    return(ff);
}