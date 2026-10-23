import java.util.*;

class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> set = new HashSet<>();
        while (n != 1) {
            if (set.contains(n)) {//if there already exists a number , break cause it is gonna repeat again 
                return false;
            }
            set.add(n); // if it's new number add new and get new sum and all
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }
            n = sum;// make sum new number and continue again 
        }
        return true;
    }
}