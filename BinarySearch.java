import java.util.*;

public class BinarySearch {
    public static void main(String[] args) {
        int arr[] = {2, 3, 5, 6, 3, 6, 445, 34, 565, 6767};
        Arrays.sort(arr);
        int l = 0, r = arr.length - 1;  
        int target = 5;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (arr[mid] == target) {
                System.out.println("Element found at index " + mid);
                break; 
            }

            if (arr[mid] > target) {
                r = mid - 1;
            }

            if (arr[mid] < target) {
                l = mid + 1;
            }
        }
    }
}
