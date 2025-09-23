#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int left = 0, right = n - 1;
        int maxHeight = 0;
        int bestLeft = 0, bestRight = 0;
        
        while (left < right) {
            int bothHeight = a[left] + a[right];
            
            if (bothHeight > maxHeight) {
                maxHeight = bothHeight;
                bestLeft = left;
                bestRight = right;
            }
            
            if (a[left] < a[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        cout << bestLeft << " " << bestRight << endl;
    }
    return 0;
}