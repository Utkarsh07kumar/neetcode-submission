class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res= new ArrayList<> ();
        List <Integer> ans = new ArrayList<> ();
        f(0,nums,ans,res);
        return res;
    }
    private void f (int i,int[] nums, List<Integer> ans,List<List<Integer>> res){
        if(i>=nums.length){
            res.add(new ArrayList<>(ans));
            return;
        }
        ans.add(nums[i]);
        f(i+1,nums,ans,res);
        ans.remove(ans.size() - 1);
        f(i+1,nums,ans,res);
    }
}

