#include <iostream>

using namespace std;

int main()
{
    int first, second;

    cin >> first >> second;

    if (second < first)
    {
        cout << "Second integer can't be less than the first.";
    }
    else
    {
        for (int i = first; i <= second; i+= 5)
        {
            cout << i << " ";
        }
    }
    
return 0;
}
