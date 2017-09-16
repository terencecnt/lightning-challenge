#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int maximizingMiles(int budget, vector<int> money, vector<int> miles)
{
    int len = miles.size(); // or money.size()
    vector<vector<int> > maximumMiles(len + 1, vector<int> (budget + 1, 0));
    
    for (int i = 0; i <= len; i++)
    {
        for (int b = 0; b <= budget; b++)
        {
            if (i==0 || b==0) {
                maximumMiles[i][b] = 0;
            } else if (money[i-1] <= b)
                if (i == 1) {
                    maximumMiles[i][b] = miles[i-1];
                } else {
                    maximumMiles[i][b] = max(miles[i-1] + maximumMiles[i-2][budget - money[i-1]],  maximumMiles[i-1][b]);
                }
            else {
                maximumMiles[i][b] = maximumMiles[i-1][b];
            }
        }
    }
    
    return maximumMiles[len][budget];
}

int main(int argc, const char * argv[]) {
    int budget = 0;
    cin >> budget;
    int len = 0;
    cin >> len;
    vector<int> money;
    vector<int> miles;
    for (int i = 0; i < len; ++i) {
        int value = 0;
        cin >> value;
        money.push_back(value);
    }

    for (int i = 0; i < len; ++i) {
        int value = 0;
        cin >> value;
        miles.push_back(value);
    }
   cout << maximizingMiles(budget, money, miles) << endl;
    return 0;
}
