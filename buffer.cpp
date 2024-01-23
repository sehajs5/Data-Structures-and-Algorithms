class Solution {
    private:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    string removeDuplicates(string s) {
        int count[26]={0};
        for(int i=0;i<s1.lenght();i++){
            int index= s1[i]-'a';
            count[index++];
        }

        //traverse window of s1 lenght
        int i=0;
        int window= s1.length();
        int count2[26]={0};
        while(i<window){
            int index=s2[i]-'a';
            count2[index++];
            i++;
        }

        if(checkEqual(count,count2)){
            return 1;
        }

        
        
    }
};