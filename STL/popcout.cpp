#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int n = 7;
    
    cout<<__builtin_popcount(n);
    
    return 0;
}
//long
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    long long n = 77777777777777;
    
    cout<<__builtin_popcountll(n);
    
    return 0;
}