#include <stdio.h>


int a[] = {10, 14, 55, 26, 27, 31, 33, 35, 42, 44, 0, 129};
size_t size = (sizeof(a) / sizeof (a[0]))-1;
int b[];

void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

void printlist(int a[], size_t size){
    int i = 0;
   printf("List before sorting\n");
   
   for(i = 0; i <= size; i++)
      printf("%d ", a[i]);

    sort(0, size);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= size; i++)
      printf("%d ", a[i]);
}


int main() { 
   
   printlist(a,size);

}

