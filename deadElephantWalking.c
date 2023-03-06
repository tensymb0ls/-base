#include <stdio.h>
#include <unistd.h>

int arr1[36] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0};
int arr2[36] = {0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,3,4,4,4,2,0,0,0,3,0,0,0,0,0,0,0,0,0,0};
int arr3[36] = {0,0,0,0,5,6,6,6,6,6,6,6,7,0,0,0,0,0,9,0,9,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0};
int arr4[36] = {0,0,0,2,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0};
int arr5[36] = {0,0,2,12,0,0,0,0,0,0,0,0,0,0,0,0,7,3,0,0,0,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0};
int arr6[36] = {0,11,0,3,0,0,0,0,2,1,1,1,1,3,0,0,0,2,3,0,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int arr7[36] = {0,0,0,0,2,1,1,2,1,3,0,0,0,2,1,1,2,1,3,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int arr8[36] = {0,0,0,2,1,3,1,1,3,0,0,0,2,1,3,1,1,3,0,0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

char a = ' '; //0
char b = '_'; //1
char c = '/'; //2
char d = '\\'; //3
char e = '~'; //4
char f = ','; //5
char g = '-'; //6
char h = '('; //7
char o = ')'; //8
char j = '.'; //9
char k = '"'; //10
char l = '^'; //11
char m = '|'; //12

void replacement(int arr[], int lenght);
void printArr(int arr[], int lenght);
void swap (int arr[], int from, int to);
void deadMenWalking(int arr[], int lenght);
///////////////////////////////////////////////
int main(void) {
   replacement(arr1, 36);  
   replacement(arr2, 36);
   replacement(arr3, 36);
   replacement(arr4, 36);
   replacement(arr5, 36);
   replacement(arr6, 36);
   replacement(arr7, 36);
   replacement(arr8, 36);
  system("clear");
  int x = 0;
  int y = 0;
      while(y < 10){
        if(x < 1){
     printArr(arr1, 36);
     printArr(arr2, 36);
     printArr(arr3, 36);
     printArr(arr4, 36);
     printArr(arr5, 36);
     printArr(arr6, 36);
     printArr(arr7, 36);
         }else{
    printArr(arr1, 36);
    printArr(arr2, 36);
    printArr(arr3, 36);
    printArr(arr4, 36);
    printArr(arr5, 36);
    printArr(arr6, 36);
    printArr(arr8, 36);
         x -= 2;
          }
         x +=1;
         sleep(1);
         system("clear");
        deadMenWalking(arr1, 36);
        deadMenWalking(arr2, 36);
        deadMenWalking(arr3, 36);
        deadMenWalking(arr4, 36);
        deadMenWalking(arr5, 36);
        deadMenWalking(arr6, 36);
        deadMenWalking(arr7, 36);
        deadMenWalking(arr8, 36);
        y +=1;
       }
  printf("The walk is finished");
    return 0;
}
//////////////////////////////////////////////////

void replacement(int arr[], int lenght){
  for (int i = 0; i < lenght; i++){
    arr[i] = arr[i] == 0 ? a : arr[i] == 1 ? b : arr[i] == 2 ? c : 
             arr[i] == 3 ? d : arr[i] == 4 ? e : arr[i] == 5 ? f :
             arr[i] == 6 ? g : arr[i] == 7 ? h : arr[i] == 8 ? o : 
             arr[i] == 9 ? j : arr[i] == 10 ? k : arr[i] == 11 ? l : m;
  }
}
void deadMenWalking(int arr[], int lenght){
  for (int i = 36; i != lenght - lenght; i--){
    swap(arr, i, i - 1);
  }
}
void printArr(int arr[], int lenght){
  for(int i = 0; i < lenght; i++){
    printf("%c", arr[i]);
  }
  printf("\n");
   }
void swap (int arr[], int from, int to){
  int tmp = arr[from];
  arr[from] = arr[to];
  arr[to] = tmp;
}
