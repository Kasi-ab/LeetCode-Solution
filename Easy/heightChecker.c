int heightChecker(int* heights, int heightsSize) {
    int c = 0;
    int expected[heightsSize];
    int temp;

    for (int i = 0; i < heightsSize; i++) {
        expected[i] = heights[i];
    }

    for (int i = 0; i < heightsSize - 1; i++) {
        for (int j = 0; j < heightsSize - i - 1; j++) {
            if (expected[j] > expected[j + 1]) {
                temp = expected[j];
                expected[j] = expected[j + 1];
                expected[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < heightsSize; i++) {
        if (heights[i] != expected[i]) {
            c++;
        }
    }

    return c;
}
