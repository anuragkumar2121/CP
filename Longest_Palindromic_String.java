class Longest_Palindromic_String{
    public int max;
    public int low;

    public String longestPalindrome(String s) {
        max = 0;
        int len = s.length();
        if(len < 2){
            return s;
        }
        for(int i=0; i<len-1; i++){
            extendPallin(i,i,s);
            extendPallin(i,i+1,s);
        }
        return s.substring(low, low+max);
    }
    public void extendPallin(int i, int j, String s){
        while(i >= 0 && j < s.length() && s.charAt(i) == s.charAt(j)){
            i--;
            j++;
        }
        if(j - i - 1 > max){
            max =  j - i - 1;
            low = i+1;
        }
    }
}