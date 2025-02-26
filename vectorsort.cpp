#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of integers
    
    vector<int> v(n);  // Create a vector of size n
    
    // Read n integers and store them in the vector
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    // Sort the vector in ascending order
    sort(v.begin(), v.end());
    
    // Print the sorted integers, separated by spaces
    for (int i = 0; i < n; ++i) {
        cout << v[i];
        if (i != n - 1) cout << " ";  // Add a space if it's not the last number
    }
    cout << endl;  // End with a newline
    
    return 0;
}
