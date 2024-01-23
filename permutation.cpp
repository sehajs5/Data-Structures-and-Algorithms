#include<iostream>
#include<vector>
using namespace std;
    bool areVectorsEqual(vector<int>a, vector<int>b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
bool checkInclusionBool(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> freqS1(26,0);
        for(char c:s1){
            freqS1[c-'a']++;
        }
        vector <int> freqS2(26,0);
        int i=0,j=0;
        while(j<s2.size()){
            freqS2[s2[j]-'a']++;
            if(j-i+1==s1.size()){
                if(areVectorsEqual(freqS1,freqS2))
                return true;
            }
            if(j-i+1<s1.size()){
                j++;
            }
            else{
                freqS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        
        return false;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> a;
        if(s.size()<p.size()) return a;
        vector <int> countp(26,0);
        for(int i=0;i<p.size();i++){
            int index=p[i]-'a';
            countp[index]++;
        }
        int i=0,j=0;
        vector<int> counts(26,0);
        while(j<s.size()){
            counts[s[j]-'a']++;
            if(j-i+1==p.size()){
                if(areVectorsEqual(counts,countp)){
                    a.push_back(i);
                } 
            }
            if(j-i+1<p.size()){
                j++;
            }
            else{
                counts[s[i]-'a']--;
                j++;
                i++;
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
    }
int main(){
    string s1= "ab";
    string s2= "eidbaooo";
    cout<<checkInclusionBool(s1,s2)<<endl;
}