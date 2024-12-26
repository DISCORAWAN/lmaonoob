#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        string str = to_string(x);

        if (x < 33) {
            cout << "NO" << endl;
        }

        if (x >= 33) {
            for (size_t i = 0; i < str.length(); i++) {
                if (i + 2 >= str.length()) {
                    if (str.substr(i) == "33") {
                        str = str.substr(0, i);
                        break;
                    }
                } else {
                    if (str.substr(i, i+2) == "33") {
                        str = str.substr(0, i) + str.substr(i + 2);
                    }
                }
            }

            if (stoi(str) < 33) {
                cout << "NO" << endl;
                // break;
            } 
            
            else if (stoi(str) >= 33) 
            {

                while (stoi(str) >= 33) {
                    if(stoi(str) % 33 == 0)
                    {
                        cout << "YES" << endl;
                        //break;
                    }
                    x = stoi(str) - 33;
                    str = to_string(x);
                }

                // if (stoi(str) == 0) {
                //     cout << "YES" << endl;
                //     break;
                } 
                if (stoi(str) < 33) {
                    cout << "NO" << endl;
                    //break;
                }
            }
        }
        //return 0;

    }