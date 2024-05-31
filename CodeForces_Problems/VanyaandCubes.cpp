// problem link
// https://codeforces.com/problemset/problem/492/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int initial = 0, count = 0;

   while(n >= initial){
       count++;
       initial += (count*(count+1))/2;
   }
    cout << count-1 << endl;

}
