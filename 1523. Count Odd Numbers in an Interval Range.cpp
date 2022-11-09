class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
    while(low<=high)
{
    if(low%2==1)
    {
        count = count+1;
        low=low+2;
    }
    else
    {
        low=low+1;
    }
    
}
return count;
    }
};
