#include<iostream>
#include<string>
using namespace std;
int longestPalindrome(string s) {
        
        int n = s.length();
        int low,high;
        
        int len=1; 
        for(int i=1;i<n;i++){
            
            //even case
            low = i;
            high = i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                
                if(high-low+1 > len)
                {
                    
                    len = high-low+1;
                }
                low--;high++;
            }
            
            //odd case
            low = i-1;
            high = i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                
                if(high-low+1 > len)
                {
                    
                    len = high-low+1;
                }
                low--;high++;
            }
        }
         return len;
    }


int main()
{
    string str="abbab";
    cout<<longestPalindrome(str);
}

