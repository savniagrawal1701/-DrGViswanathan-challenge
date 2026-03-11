class Solution {
public:
int converttodecimal(string x)
{
    int len=x.length();
    int power2=1;
    int num=0;
    for(int i =len-1;i>=0;i--){
        if(x[i]=='1'){
            num=num+power2;
          
        }
          power2=power2*2;
    }
    return num;
}
string converttobinary(int n)
{
    string res = "";
    while (n > 0)
    {
        if (n % 2 == 1)
            res +='1';
        else
            res +='0';
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
    int bitwiseComplement(int n) {
        if(n==0) return 1;
      string s =converttobinary(n);
      for(int i =0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='1';
        }else{
            s[i]='0';
        }
      }
      int ans=converttodecimal(s);
      return ans;
    }
};