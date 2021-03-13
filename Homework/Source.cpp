#include <iostream> 

using namespace std;

void fillArr(int arr[],int N);
void showArr(int arr[], int N);
int delOthermethod(int arr[], int &N,int key);



int main()
{
	setlocale(0, "Rus");
    int N=10;
    int* arr = new int[N];
    
    cout << "Массив: ";
    fillArr(arr, N);
    showArr(arr, N);
    cout << endl;

    int key;
    cout << "Введите ключ: ";
    cin >> key;

    delOthermethod(arr, N, key);

    cout << "Новый массив: ";
    showArr(arr,N);
    delete[]arr;
	return(0);
}

int delOthermethod(int arr[],int &N, int key) {
    int j = 1;
    int c = 0;
    for (int i=1; i <= N; i++)
    {
        arr[j] = arr[i];
        if (arr[i] !=  key) {
            j++;
        }
        else {
            c++;
        }
    }
      N = N - c;
      return N;
}


void fillArr(int arr[], int N) {

    for (int k = 1; k <= N; k++)
    {
        arr[k] = rand () % 10;
    }
}


void showArr(int arr[], int N) {

    for (int m = 1; m <= N; m++)
    {
        cout << arr[m] << " ";
    }
}

