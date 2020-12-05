class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s=="") return 0;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                flag=1;
        }
        if(flag==0) return 1;
        if(s.length()==1)
            return 1;
        int begin=0,len=-1,end;
    
        map<char,int>mp;
       for(int i=0;i<s.length();i++)
           mp.insert(pair<char,int>(s[i],0));
        for(end=0;end<s.length();end++)
        {
            
            if(mp[s[end]]>=1)
            {
                if(len<end-begin)
                {
                    len=end-begin;
                  //  cout<<len<<" ";
                }
                
                while(mp[s[end]]!=0)
                {
                    mp[s[begin]]=mp[s[begin]]-1;
                    begin++;
                    
                }
                mp[s[end]]+=1;
                
                
            }
            else
            {
                mp[s[end]]+=1;
             //  mp.insert(pair<char,int>(s[end],0));
            }
            cout<<len<<begin<<" ";
        }
        
        if(len<(end-begin))
            len=end-begin;
