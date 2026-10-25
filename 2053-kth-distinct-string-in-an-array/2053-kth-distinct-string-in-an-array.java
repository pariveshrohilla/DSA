import java.util.*;

class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> map = new HashMap<>();
        for (String word : arr) {
            if (map.containsKey(word)) {
                map.put(word, map.get(word) + 1);
            } else {
                map.put(word, 1);
            }
        }
        for (String word : arr) {
            if (map.get(word) == 1) {
                k--;

                if (k == 0) {
                    return word;
                }
            }
        }
        return "";
    }
}
