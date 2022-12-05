#include <iostream>

using namespace std;

double minValue(double tab[]);
double maxValue(double tab[]);

int main (){

    double tab[5];



    for (int i = 0; i < 5; i++){
        
        cout << "Enter number " << i + 1  << " : ";
        cin >> tab[i];
    }

   cout << "The minimum value is : " << minValue(tab) << endl;
   cout << "The maximum value is : " << maxValue(tab) << endl;

    return 0;
}

double minValue(double tab[])
{

    double minValue = tab[0];

    for(int i = 0; i < 5; i++){
        if(minValue< tab[i]){
            minValue = tab[i];
        }
    }

    return minValue;
}

double maxValue (double tab[])
{

    double maxValue = tab[0];

    for(int i =0; i < 5; i ++){
        if(maxValue > tab[i]){
            maxValue= tab[i];
        }
    }
    return maxValue;
}


