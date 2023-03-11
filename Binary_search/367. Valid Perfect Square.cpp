class Solution {
//problem link  --> https://leetcode.com/problems/valid-perfect-square/description/
public:
    bool isPerfectSquare(long  nums){
        long s = 0  ; 
        long  e = nums; 
    
    while(s <= e){
        long  mid = (s + e )/ 2 ;

        if((mid*mid)== nums){

            return true;
        }
        if( (mid*mid) >nums){
            e = mid - 1 ;
        }

        else{
            s = mid + 1 ; 
        }
    }

    return false;

}
};
