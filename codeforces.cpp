#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Option 3: Remove the second-to-last digit
    int option3 = (n / 100) * 10 + (n % 10);

    // Print the maximum of the three possibilities
    cout << max({option1, option2, option3}) << "\n";

    return 0;
}