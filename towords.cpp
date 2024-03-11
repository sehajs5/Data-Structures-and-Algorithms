string units[20]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ",
"thriteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
string tens[10]={"","","twenty ","thrity ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
string two_digit(int n){
    string ans="";
    if(n>19 && n<=99){
        ans+=tens[n/10]+units[n%10];
    }
    else{
    ans+=units[n];
    }
    return ans;
}
string three_digit(int num){
    if(num>100){
        return tens[num/100]+"hundred "+two_digit(num%100);
    }
    else{
        return two_digit(num);
    }
}
string handleAll(int n){
    //Write your code here.
    string ans="";
    if(n==0){
        ans="";
    }
    else {
        if (n >= 1000000)
    {
        ans+=three_digit(n/10000000)+"crore ";
    }
    if(n>=100000 && n%10000000!=0){
        ans+=three_digit((n%10000000)/100000)+"lakh ";
    }
    if(n>=1000 && n%100000!=0){
        if(three_digit((n%100000)/1000)==""){
            ans+=three_digit((n%100000)/1000);
        }else{
        ans+=three_digit((n%100000)/1000)+"thousand ";
        }
    }
    if(n>100 && n%1000!=0){
        if(three_digit((n%1000)/100)==""){
            ans+=three_digit((n%1000)/100);
        }else{
        ans+=three_digit((n%1000)/100)+"hundred ";
        }
        if (n % 100 != 0) {
          ans += "and ";
        }
    }
    }
    ans+=two_digit(n%100);
    return ans;
}