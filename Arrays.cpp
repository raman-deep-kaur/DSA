void swapAlternate(int *arr, int size)
{
    //Write your code here
    for(int i = 0; i< size; i+=2){
        if(i+1<size){
            //swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
