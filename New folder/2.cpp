﻿#include <iostream>
#include <string>
using namespace std;
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
    int count=0;//تنها خطایی که دیدم این بود که مقدار دهی اولیه نداشت:(
    for (int i = 0; i <= arrLength; ++i)
        for (int j = 0; j <= sArr[i].size(); ++j)
            if (sArr[i][j] = specificChar)
                count++;
    return count;
}

int main() {
    string sArr[4] = {
            "I am",
            "in",
            "ap",
            "class"
    };
    char findIt;
    cin >> findIt;
    cout << countAllSpecificChars(sArr, 4, findIt);
}