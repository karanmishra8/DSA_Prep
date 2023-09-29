#include<iostream>
#include<string>
using namespace std;
string compression(string &str){
    int arr[26] = {0};
        int i = 0;
       string temp="";
        while(str[i] != '\0'){
            char ch = str[i];
            int num = ch - 'a';
             arr[num]++;
             i++;
        }
         
        for(int i=0; i<26; i++)
        {
            if(arr[i] != 0)
            {
              str = i + 'a';
              if(arr[i]>=2)
              {
              str = str +  to_string(arr[i]);
              }
              temp=temp+str;
           }
        }
     str=temp;
    return str;
}
int main(){
    string str = "aabbccd";
   cout<<compression(str);
    return 0;
}