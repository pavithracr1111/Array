#define SIZE 5

int main() {
    int n = SIZE, m = SIZE;
    int a[SIZE] = {1, 3, 5, 7, 9};
    int b[SIZE] = {2, 4, 6, 8, 10};
    int c[2*SIZE]; // new array to hold the merged elements
    int k = 0;

    for (int j = 0; j < m; j++)
    {
        c[k++] = a[j];
        c[k++] = b[j];
    }

    for(int i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}