
class Solution {
    public boolean rotateString(String s, String goal) {
        if (s.length() != goal.length()) {
            return false;
        }
        return (s + s).contains(goal); //the main reason for this is because ,
        //like if i have an string abcde , and it's sffled version is cdeab . 
        // so s+s = cde"abcdeab" . Therefor we get abcde 
    }
}
