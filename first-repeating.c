#include <stdio.h>
//*Perubahan Array dapat dilakukan di Array global ini
int arrGlobal[] = {10, 5, 3, 4, 3, 5, 6};

int FindRepeatingHashing(int arr[], int size)
{
    int hashing[size];
    int min = -1;
    int indeks = size;
    for (int i = 0; i < size; i++)
    {
        indeks--;
        hashing[i] = arr[indeks];
        for (int j = indeks - 1; j >= 0; j--)
        {
            if (hashing[i] == arr[j] && (min == -1 || j < min))
                min = j;
        }
    }
    return min;
}

int main()
{
    puts("Remedial Kuis SDA");
    puts("Nama\t: Reni Uswatun Hasanah ");
    puts("NIM\t: L0122136");
    puts("Find the first repeating element");
    puts("=======================================");
    puts("\tMenggunakan hash table");
    puts("=======================================");
    printf("Array : ");
    int temp = sizeof(arrGlobal) / sizeof(arrGlobal[0]);
    for (int i = 0; i < temp; i++)
    {
        printf("%d ", arrGlobal[i]);
    }
    int repeatIndex = FindRepeatingHashing(arrGlobal, temp);
    printf("%s%d\n", repeatIndex == -1 ? "\nThere are no repeat elements or " : "\nThe first repeating element is : ", repeatIndex != -1 ? arrGlobal[repeatIndex] : repeatIndex);
}