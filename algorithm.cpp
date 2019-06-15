#include <iostream>

bool duplicate(int numbers[], int length, int* duplicate) {
    if (numbers == NULL || length <= 0)
    {
        return false;
    }

    int cacheWrap = 0;
    for (int i = 0; i < length && i > 0; i++)
    {
        if (numbers[i] != i) {
            cacheWrap = numbers[numbers[i]];
            numbers[numbers[i]] = numbers[i];
            numbers[i] = cacheWrap;
            i--;
        } else if (numbers[i] == i)
        {
            duplicate = &i;
            return true;
        }
    }
    return false;
    
}


int main() {
    int origin = 4, &test = origin;
    test = 6;
    std::cout << "orign: " << origin << std::endl;

    // int* duplicateValue;
    // int[] testArray = {1, 2, 4, 0};
    // duplicate(testArray, 4, &duplicateValue);
    return 0;
}