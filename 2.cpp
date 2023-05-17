#include <iostream>
#include <string>

using namespace std;

// count all the specific char in the whole array of strings
int countAllSpecificChars(string sArr[], int arrLength, char specificChar) {
    int count;
    for (int i = 0; i < arrLength; ++i)
        {
            for (int j = 0; j < sArr[i].length(); ++j)
            {// if the jth char of the string is the specific char
            if (sArr[i][j] == specificChar)
               {
                 count++;
               }
            }
        }
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
    //result for(a)=3;
    //result for(I)=1;
    //result for(m)=1;
    //result for(i)=1;
    //result for(p)=1;
    //result for(c)=1;
    //result for(s)=2;
    //result for(l)=1;






    return 0;
}