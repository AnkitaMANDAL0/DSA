class Solution {
public:
    string largestGoodInteger(string num) {
        char best=0;
        for(int i=0;i+2<num.length();i++){
          char a=num[i],b=num[i+1],c=num[i+2];
          if(a==b && b==c){
            if(best==0 || a>best){
                best=a;
            }
          }
        }
        if(best==0) return "";
        return string(3,best);
    }
};