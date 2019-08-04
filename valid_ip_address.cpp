/*
Given a string containing only digits, restore it by returning all possible valid IP address combinations.

A valid IP address must be in the form of A.B.C.D, where A,B,C and D are numbers from 0-255. The numbers cannot be 0 prefixed unless they are 0.

Example:

Given “25525511135”,

return [“255.255.11.135”, “255.255.111.35”]. (Make sure the returned strings are sorted in order)

*/

vector<string> Solution::restoreIpAddresses(string A) {
    
    vector<string> v;
    map<string,int> m;
    //int a,b,c,d;
    string first,second,third,fourth, f;
    for (int a=1; a<4; a++)
    {
        first = A.substr(0,a);
        //cout<<first<<" ";
        if ((first.size()>1 && first[0]!='0') || (first.size()==1)){
            //cout<<first<<" ";
        
        if ((first.size() <=3 && stoi(first) <=255 ))
        {
            
            for(int b=1; b<4;b++)
            {
                second = A.substr(first.size(),b);
                //cout<<second<<" ";
                if (second.size()>1 && second[0]!='0' || (second.size()==1 )){
                if (second.size() <=3 && stoi(second) <=255 && stoi(second)>=0 )
                {
                    for(int c=1; c<4; c++)
                    {
                        third = A.substr(first.size()+second.size(),c);
                        
                        //cout<<third<<" ";
                        if (third.size()>1 && third[0]!='0' || (third.size()==1 )){
                        if (third.size() <=3 && stoi(third) <=255 && stoi(third)>=0 )
                        {
                            fourth = A.substr(first.size()+second.size()+third.size());
                            //cout<<fourth<<" ";
                            if (fourth.size()>1 && fourth[0]!='0' || (fourth.size()==1)){
                            if (fourth.size() <=3 && stoi(fourth) <=255 && stoi(fourth)>=0 )
                            {
                                f = first+"."+second+"."+third+"."+fourth;
                                if (m.find(f) == m.end())
                                {
                                    m[f]=1;
                                    v.push_back(f);
                                }
                                //cout<<f<<" ";
                            }
                            }
                        }
                        }
                    }
                }
                }
            }
        }
        }
    }
    
    return(v);
    
}

