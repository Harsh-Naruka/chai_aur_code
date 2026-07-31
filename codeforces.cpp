#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
<<<<<<< HEAD
=======

>>>>>>> c2f9210 (Update codeforces.cpp)
        if (a[0] == -1) {
            if (a[n - 1] == -1)
                a[0] = a[n - 1] = 0;
            else
                a[0] = a[n - 1];
        } else {
            if (a[n - 1] == -1)
                a[n - 1] = a[0];
        }

<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>>
        
<<<<<<< HEAD


=======


>>>>>>>
        for (int x : a)
            cout << x << " ";
        cout << "\n";
=======
        for (int i = 1; i < n - 1; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }
        int ans = a[n - 1] - a[0];
        if (ans < 0)
            ans = -ans;

>>>>>>> 3de847d (Continue updating codeforces.cpp)
    }

    return 0;
}
