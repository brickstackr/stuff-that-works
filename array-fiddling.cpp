#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
array<int,5> testarray {1,2,3,4,5};
cout << testarray.front() << endl;
cout << testarray.back() << endl;
cout << testarray.size() << endl;
return 0;
}
