class Solution {
private:

  int roman(char c)
        {
            switch(c)
            {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;

            }
        }

public:
    int romanToInt(string s) {

        
        int total=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int current_value=roman(s[i]);
            if(i+1<n && current_value<roman(s[i+1]))
            {
                total=total-current_value;
            }
            else
            {
                total=total+current_value;
            }
        }
        
        
            
        return total;
    }
};
