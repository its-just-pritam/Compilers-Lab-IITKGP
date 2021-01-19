//Implement Insertion sort
int InsertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i=i+1)
   {
   	key = arr[i];
   	j = i-1;
    while(j>=0 && arr[j] > key){
    	arr[j+1] = arr[j];
    	j = j-1;
    }
    arr[j+1] = key;

   }
   return 0;
}

int main()
{
    printStr("Insertion Sort\n");
    int arr[100];
    int n, err;
    err = 1;
    printStr("Enter the size of the array: \n");
    n = readInt(&err);
    printStr("Enter the elements of the array: \n");
    for(i=0;i<n;i = i+1)
    {
         arr[i] = readInt(&err);
    }

    InsertionSort(arr, n);
    printStr("The sorted array is: \n");
    for (i=0; i < n-1; i = i+1)
    {
        printInt(arr[i]);
        printStr(", ");
    }
    printInt(arr[n-1]);
    printStr("\n");
    return 0;
}
