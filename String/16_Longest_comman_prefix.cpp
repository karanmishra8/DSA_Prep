
/*  

//LONGEST COMMAN PREFIX BY NIKHIL LOHIA
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
        {
            return strs[0];
        }
        int n=strs.size();
        string result="";
        sort(strs.begin(),strs.end());
        string str1=strs[0];
        string str2=strs[n-1];
        int p=str1.size();
        int q=str2.size();
        int i=0;
        while(i<p && i<q)
        {
            if(str1[i]!=str2[i])
            {
            break;
            }
            else
            {
                result.push_back(str2[i]);
            }
            i++;
        }
        return result;
    }
};





 */