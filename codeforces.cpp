#include <bits/stdc++.h>
using namespace std;

int main() {
map<int, int> mp;



// Access


// Check if key exists
if (mp.find(20) != mp.end()) {
    cout << "Found";
}

// Delete
mp.erase(20);

// Number of elements
cout << mp.size();

// Check empty
cout << mp.empty();
}