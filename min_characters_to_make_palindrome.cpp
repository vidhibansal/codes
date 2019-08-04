/*Given an string A. The only operation allowed is to insert characters in the beginning of the string.

Find how many minimum characters are needed to be inserted to make the string a palindrome string.



Input Format

The only argument given is string A.

Output Format

Return the minimum characters that are needed to be inserted to make the string a palindrome string.

For Example

Input 1:
    A = "ABC"
Output 1:
    2
    Explanation 1:
        Insert 'B' at beginning, string becomes: "BABC".
        Insert 'C' at beginning, string becomes: "CBABC".

Input 2:
    A = "AACECAAAA"
Output 2:
    2
    Explanation 2:
        Insert 'A' at beginning, string becomes: "AAACECAAAA".
        Insert 'A' at beginning, string becomes: "AAAACECAAAA".

*/

int Solution::solve(string A) {
    
    char a;
    string s2;
    string s3;
    int ans=0;
    stack<char> s;
    for (int i=0; i<A.size(); i++)
    {
        s.push(A[i]);
    }
    string s1 = A;
    reverse(s1.begin(), s1.end());
    if ( s1 == A)
    {
        return(0);
    }
    
    else
    {
        while (!s.empty()) {
        //s1 = A;
        
            a = s.top();
            ans +=1;
            s.pop();
            s3 +=a;
            s1 = s3+A;
            //s3 = s1;
            s2 = s1;
            reverse(s1.begin(),s1.end());
            if (s1 == s2)
            {
                return(ans);
            }
        }
    }
}
