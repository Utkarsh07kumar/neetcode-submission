class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> ans=new ArrayList<> ();
        List<Integer> ds= new ArrayList<> ();
        Arrays.sort(candidates);
        f(0,candidates,target,ans,ds);
        return ans;
    }
    private void f(int i,int[] candidates,int target, List<List<Integer>> ans,List<Integer> ds){
        //base case
        if(target==0){
            ans.add(new ArrayList<> (ds));
            return;
        }
        for(int j=i;j<candidates.length;j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            //pick
            ds.add(candidates[j]);
            f(j+1,candidates,target-candidates[j],ans,ds);
            ds.remove(ds.size() - 1);           
        }
    }
}
