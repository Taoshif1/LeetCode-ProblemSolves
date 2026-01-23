bool validMountainArray(int* arr, int arrSize){

    if(arrSize < 3)
        return false;

    int i = 0;

    // Walk up (strictly increasing)
    while(i + 1 < arrSize && arr[i] < arr[i + 1]){
        i++;
    }

    // Peak cannot be first or last
    if(i == 0 || i == arrSize - 1)
        return false;

    // Walk down (strictly decreasing)
    while(i + 1 < arrSize && arr[i] > arr[i + 1]){
        i++;
    }

    // If reached end, it's valid
    return i == arrSize - 1;
}
