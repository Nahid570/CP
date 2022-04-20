#include<bits/stdc++.h>

 using namespace std;

 int main()
 {

     int frnds, bottles, ml, limes, slices, salt,frnds_ml, frnds_salt;

     cin >> frnds >> bottles >> ml >> limes >> slices >> salt >> frnds_ml >> frnds_salt;

     int drink_ml = bottles * ml;
     int ini_toasts = drink_ml / frnds_ml;
     int limes_toasts = limes * slices;
     int salt_toasts = salt / frnds_salt;

     int min = 0;

     if(ini_toasts < limes_toasts && ini_toasts < salt_toasts)
     {
         min = ini_toasts;
     }else if(limes_toasts < ini_toasts && limes_toasts < salt_toasts)
     {
         min = limes_toasts;
     }else
     {
         min = salt_toasts;
     }

     int total_toasts = min / frnds;

     cout << total_toasts << endl;

     return 0;
 }
