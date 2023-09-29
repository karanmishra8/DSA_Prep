string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a1[i]]=1;
    }
    for(int j=0;j<m;j++)
    {
        if(mp[a2[j]]!=1)
        {
            return "No";
        }
    }
    return "Yes";
}