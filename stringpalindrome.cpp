bool checkPalindrome(string s)
{
  int size= s.size();
  string filtered;
  for(int i=0;i<size;i++){
    if(isalnum(s[i])){
      filtered+=tolower(s[i]);
    }
  }
  int a= filtered.size();
  for(int i=0;i<=a/2;i++){
    if(filtered[i]!=filtered[a-i-1])
    return false;
  }
  return true;
}