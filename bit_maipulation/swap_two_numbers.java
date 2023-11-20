class Solution{
    public List<Integer> swapNumbers(int a, int b) {
        // Your code goes here
        List<Integer> l = new ArrayList<>();
        a ^= b;
        b ^= a;
        a ^=b;
        l.add(a);
        l.add(b);
        return l;
    }
}