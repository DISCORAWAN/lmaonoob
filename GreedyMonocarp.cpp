#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int main(void) {
    int t;

    cin >> t;

    while(t--){
        int k, n, SUM = 0;
        cin >> n;
        cin >> k;

        vector <int> vec;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
            SUM += a;
        }

        sort(vec.begin(), vec.end(), greater<int>());


        int sum = 0;
        if(SUM > k)
        {
            for(int i = 0; i < n; i++)
            {
                sum += vec[i];
                if(sum > k)
                {
                    cout << k - sum + vec[i] << endl;
                    break;
                }
            }
        }
        else
        cout << k-SUM << endl;
    }


}