#include <string>
#include <bits/stdc++.h>

using namespace std;


int main () {

    string inputTmp;
    
    string priceTmp;
    float difference;
    vector<int> coinCount {0,0,0,0};

    

    cin >> inputTmp;
    cin >> priceTmp;


    float input = stof(inputTmp);
    float price = stof(priceTmp);



    if (price < input) {
        
        difference = input - price;
        difference = difference * 100;
        cout << difference << endl;
        
        do {
            if (difference >= 100) {
                coinCount[3] = coinCount[3] + 4;
                difference  = difference - 100;
            }   
            else if (difference < 100 && difference >= 25) {
                coinCount[3] = coinCount[3] +1;
                difference = difference - 25;
            }
            else if (difference < 25 && difference >= 10) {
                coinCount[2] = coinCount[2] + 1;
                difference = difference - 10;
            }
            else if (difference < 10 && difference >= 5) {
                coinCount[1] = coinCount[1] + 1;
                difference = difference - 5;
            }
            else if (difference < 5 && difference > 0) {
                coinCount[0] = coinCount[0] +  1;
                difference = difference - 1;
            }
        
        } while (difference > 0);

        


    }

    //for (int i =0; i < coinCount.size(); i++)
    //    cout << coinCount[i] << endl;

    for (int i = 0; i < coinCount.size(); i ++)

        cout << coinCount[i] << endl;

    return 0;
}