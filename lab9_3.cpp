//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    double mean, sd, sum = 0, sumsq = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        sum = sum + atof(textline.c_str());
        sumsq = sumsq + pow(atof(textline.c_str()),2);
        count++;
    }
    source.close();
    mean = sum / count;
    sd = sqrt((sumsq/count) - (pow(mean,2)));
    cout << "Number of data = " << count << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;

    return 0;
}