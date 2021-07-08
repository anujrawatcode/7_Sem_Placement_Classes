#include<iostream>
#include<vector>
using namespace std;

// STL has algorithms , functions , containers , iterators
// Containers - Sequence , Adaptors , Associative , Unordered Associative.

int main()
{
    vector<int> v(10,1);
    v.insert(7,0);
    for(auto x:v)
    cout<<x<<" ";



    return 0;
}