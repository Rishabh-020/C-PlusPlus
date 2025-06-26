import java.util.Arrays;
import java.util.Scanner;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int len1=nums1.length,len2=nums2.length,j=0;
        int[]  merge =new int[len1+len2];
        for(int i=0;i<len1/2;i++){
            merge[i]=nums1[i];
            merge[len1-i-1]=nums1[len1-i-1];
        }
        for(int i=0;i<len2/2;i++){
            merge[i+len1]=nums1[i];
            merge[len2-i-1+len1]=nums1[len2-i-1];
        }
        int len=merge.length;
        Arrays.sort(merge);
        if(merge.length %2==1){
            return (merge[len/2]);
        }
        return (merge[len/2]+merge[(len/2)+1])/2.0;
    }
}
public  class one{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int nums1=sc.nextInt();
        int nums2=sc.nextInt();
        int[] arr1=new int[nums1];
        for(int i=0;i<nums1;i++){
            arr1[i]=sc.nextInt();
        }
        int[] arr2=new int[nums2];
        for(int i=0;i<nums2;i++){
            arr2[i]=sc.nextInt();
        }
        Solution s1=new Solution();
        double median = s1.findMedianSortedArrays(arr1, arr2);        
        System.out.println(median);
    }
}