#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data;   //vector is inbuilt function which does dynamic memory allocation.
    data.push_back(5);  //data wala array ma jati size badhxa capacity pani X2 times le badhxa  
    data.push_back(2);
    data.push_back(1);
    data.push_back(4);  //size:4 capacity:4 // capacity purai fill navaye samma X2 hudaina.
    data.push_back(5);

    cout << data[3] << endl;

    cout << "size:" << data.size() << endl;
    cout << "capacity:" << data.capacity() << endl;
    return 0;
}