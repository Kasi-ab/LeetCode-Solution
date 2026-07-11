bool canMakeArithmeticProgression(int* arr, int arrSize) {
    if (arrSize <=2) return true;

    for(int i=0;i< arrSize-1;i++){
        for(int j=0;j< arrSize-i-1;j++){
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int d = arr[1] - arr[0];

    for(int i=2;i<=arrSize-1;i++){
        if(arr[i]-arr[i-1]!=d){
            return false;
        }
    }
    return true;
}
