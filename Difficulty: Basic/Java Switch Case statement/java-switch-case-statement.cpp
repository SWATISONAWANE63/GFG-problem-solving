#include <bits/stdc++.h>
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        switch(choice){
            case 1:{
            double radius=arr[0];
            double areaCircle=M_PI*radius*radius;
            return areaCircle;}
            case 2:{
            double len=arr[0];
            double bre=arr[1];
            double areaRec=len*bre;
            return areaRec;}
            default:
                return 0.0;
            }
        
    }
};
