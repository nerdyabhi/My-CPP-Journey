#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr, int p1, int p2, int p3)
{
    if (p3 >= arr.size())
        return;


    
    if (p1 < p2)
    {
        cout << arr[p1] ;
        print(arr, p1 + 1, p2, p3);
    }

    else if (p2 < arr.size())
    {
        cout<<"  , ";
        print(arr, p3, p2 + 1, p3);

    }

    else 
    {
        // cout << endl;
        print(arr, 0, 0, p3 + 1);
    }

}

int main()
{
    vector<int> arr{1, 2, 3};
    print(arr, 0, 0, 0);

    return 0;
}