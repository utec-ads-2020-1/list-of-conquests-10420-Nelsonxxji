#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main(){
    int numberOfLines, count = 0;
    string line, name, country;
    istringstream ss;
    map<string, int> countryCount;

    getline(cin, line);
    ss.str(line);
    ss >> numberOfLines;
    ss.clear();

    for(int i = 0; i < numberOfLines; i++)
    {
        getline(cin, line);
        ss.str(line);
        ss >> country;
        countryCount[country] += 1;
        ss.clear();
    }
    for (auto it = countryCount.begin(); it != countryCount.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return EXIT_SUCCESS;
}