#include <iostream>
bool isPowerOfTwo(int n){
return (n > 0) && ((n & (n - 1)) == 0);
}
using namespace std;
int main()
{
    int testnumbers[] = {0, 1, 2, 3, 4, 15, 16, -8};
    cout << boolalpha;

    for (int num : testnumbers){
        cout << num << "is a power of 2? " << isPowerOfTwo(num) << endl;
    }

    return 0;
}
