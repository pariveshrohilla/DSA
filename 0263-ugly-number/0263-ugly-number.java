class Solution {
    public boolean isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 2 == 0) {//keep dividing it with 2 , till it's not further divisible
            n /= 2;
        }
        while (n % 3 == 0) {//same with 3
            n /= 3;
        }
        while (n % 5 == 0) {//same 5
            n /= 5;
        }
        return n == 1;//at last only if 1 is remaining then it only has 2 ,3 ,5 as it's only factors
    }
}