class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int store=numBottles;
        int full=1;
        int left;
        int count=0;
        while(full){
            full=numBottles/numExchange;
            left=numBottles%numExchange;
            numBottles=full+left;
            count+=full;
        }
        return store+count;
    }
};
