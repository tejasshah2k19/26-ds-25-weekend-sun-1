
class TwoSum {

    public int[] twoSum(int[] nums, int target) {
        int arr[] = new int[2];

        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (i != j && nums[i] + nums[j] == target) {
                    arr[0] = i;
                    arr[1] = j;
                    return arr;
                }
            }
        }

        return arr;
    }

    public static void main(String[] args) {
        TwoSum t = new TwoSum();

        int arr[] = t.twoSum(new int[]{2, 7, 11, 15}, 9);
        System.out.println(arr[0] + " : " + arr[1]);

        arr  = t.twoSum(new int[]{3,2,4}, 6);
        System.out.println(arr[0] + " : " + arr[1]);

        arr  = t.twoSum(new int[]{3,3}, 6);
        System.out.println(arr[0] + " : " + arr[1]);


    }
}
