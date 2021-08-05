#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int fibonacci (int requested, vector<int> fsequence) {

    
    int next;
    
 

    for (int i = 2; i < requested; i++){

    
        next = fsequence[i-1]  + fsequence[i-2];


        fsequence.push_back(next);

           
    }


    return fsequence[requested - 1];



}


int main () {

   vector<int> fsequence;

   fsequence.push_back(0);

   fsequence.push_back(1);

    for (int rq = 0; rq <= 100; rq++)


    cout << fibonacci(rq, fsequence) << endl;

}