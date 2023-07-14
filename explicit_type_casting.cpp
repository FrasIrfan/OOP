#include <iostream>
using namespace std;

int main()
{
    float x = 10.3, y = 5.2;
    float ans;
    ans = (int)x % (int)y; // Conversion of data type
    cout << ans << endl;
    cout << sizeof(ans);
    return 0;
}