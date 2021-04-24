class Solution {
public:
    string addStrings(string num1, string num2) {
    
        int s = num1.length() -1;
        int l = num2.length()-1;
        int len=0;
        
        if(s>l){
            len =s;
        }
        else
            len =l;
        string str="";
        int flag=0;
        while(len>=0){
            int k=0,j=0;
            if(s>=0)
             k=num1[s] - '0';
            if(l>=0)
             j=num2[l] - '0';
            int y=k+j+flag;
            if(y>9){
                str=str+ to_string(y%10);
                flag = 1;
            }
            else{
                  str=str+ to_string(y);
                flag=0;
            }
            s--;
            l--;
            len --;
        }
        if(flag ==1){
            str=str+"1";
        }
        reverse(str.begin(), str.end()) ;
        return str;
    }
};