//https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_630450?interviewProblemRedirection=true&search=rotated&leftPanelTabValue=SUBMISSION
int search(int* arr, int n, int key) {

  int start = 0;

  int end = n - 1;

 

   int mid = start + (end - start)/2;

 

  while(start <= end){

 

  if(arr[mid] == key){

      return mid;

  }

 

   else if(arr[start] <= arr[mid]){

        if(arr[start] <= key && key <= arr[mid]){

       end = mid - 1;

   }

   else{

      start = mid + 1;

       }

   }

 

  else{

    if(arr[mid] <= key && key <= arr[end]){

        start = mid + 1;

     }

  else{

      end = mid - 1;

     }

 }

 

     mid = start + (end - start)/2;

     }

     return -1;

}
