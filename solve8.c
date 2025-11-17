void duplicateZeros(int* arr, int arrSize) {
    int zeros = 0;

    // 1️⃣ Count zeros
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 0) zeros++;
    }

    // 2️⃣ Two pointers
    int i = arrSize - 1;          // original index
    int j = arrSize - 1 + zeros;  // virtual index (after duplication)

    // 3️⃣ Fill from the back
    while (i < j) {
        if (j < arrSize) {
            arr[j] = arr[i];
        }

        if (arr[i] == 0) {
            j--;
            if (j < arrSize) {
                arr[j] = 0;
            }
        }

        i--;
        j--;
    }
}
