//Implement second maximum number search
int SecondMaxSearch(int arr[], int n)
{
   int i, j, k, ans, max;
   max = 0;
   for (i = 0; i < n; i=i+1)
   {
   		if( arr[i] > max )
   		{
   			max = arr[i];
   		}
   }

   for (j = 0; j < n; j=j+1)
   {
   		if( arr[j] == max )
   		{
   			arr[j] = 0;
   		}
   }
   ans = 0;
   for (k = 0; k < n; k=k+1)
   {
   		if( arr[k] > ans )
   		{
   			ans = arr[k];
   		}
   }

   return ans;
}

int main()
{
    printStr("Insertion Sort\n");
    int arr[100];
    int n, err, ans;
    err = 1;
    printStr("Enter the size of the array: \n");
    n = readInt(&err);
    printStr("Enter only positive elements of the array: \n");
    for(i=0;i<n;i = i+1)
    {
         arr[i] = readInt(&err);
    }

    ans = SecondMaxSearch(arr, n);
    printStr("Second Largest number in the array is: ");
	printInt(ans);
	printStr("\n");
    return 0;
}
