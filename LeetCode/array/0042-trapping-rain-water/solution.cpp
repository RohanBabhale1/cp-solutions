class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int l = 0, r = height.size()-1;
        int lmax = height[l], rmax = height[r];
        while ( l < r ) {
            if( lmax < rmax ){
                lmax = max( lmax, height[l] );
                water += ( lmax - height[l] );
                l++;
            } else {
                r--;
                rmax = max( rmax, height[r]);
                water += ( rmax - height[r] );
                
            }
        }
        return water;
    }
};
