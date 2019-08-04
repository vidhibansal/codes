//The count-and-say sequence is the sequence of integers beginning as follows:

/*1, 11, 21, 1211, 111221, ...

1 is read off as one 1 or 11.
11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

Example:

if n = 2,
the sequence is 11
*/

string Solution::countAndSay(int A) {
    
    string s="";
    char a;
    string first = to_string(1);
    int c,cc,f=0;
    
    for (int i=0; i<A-1; i++)
    {
        
        a = first[0];
        c = 1;
        //return(to_string(first.size()));
        //return(to_string(c));
        for (int j=1; j<first.size(); j++)
        {
            if (first[j] == a)
            {
                c = c+1;
            }
            else
            {
                s += to_string(c)+a;
                c=1;
                a = first[j];
                f =1;
            }
        }
        
        s +=to_string(c)+a;
        first = s;
        s="";
        
    }
    return(first);
}


