//************************************
//oj.tsinsen
//A1021.
#include <cstdio>
using namespace std;
void quickSort(int [], int, int);
void swap(int [], int, int);
int merge(int [], int [], int [], int, int);         //set A, B: get A\/B
int minus(int [], int [], int [], int, int);         //set A, B: get A-B

int main() {
    int num_a, num_b;
    int array_a[1000], array_b[1000];

    scanf("%d", &num_a);
    for (int i = 0; i < num_a; i ++) {
        scanf("%d", &array_a[i]);
    }
    scanf("%d", &num_b);
    for (int i = 0; i < num_b; i ++) {
        scanf("%d", &array_b[i]);
    }

    //first, sort two arrays of set
    quickSort(array_a, 0, num_a);
    quickSort(array_b, 0, num_b);

    //A /\ B = A-(A-B)
    //A \/ B
    //A - B

    //A - B
    int AminusB[1000], num_aminusb;
    num_aminusb = minus(array_a, array_b, AminusB, num_a, num_b);

    //A /\ B
    int AandB[1000], num_aandb;
    num_aandb = minus(array_a, AminusB, AandB, num_a, num_aminusb);

    //A \/ B
    int AorB[2000], num_aorb;
    num_aorb = merge(array_a, array_b, AorB, num_a, num_b);

    //if (num_aandb) {
        for (int i = 0; i < num_aandb; i ++)
            printf("%d ", AandB[i]);
        printf("\n");
    //}
    //if (num_aandb) {
        for (int i = 0; i < num_aorb; i ++)
            printf("%d ", AorB[i]);
        printf("\n");
    //}
    //if (num_aandb) {
        for (int i = 0; i < num_aminusb; i ++)
            printf("%d ", AminusB[i]);
        printf("\n");
    //}

    return 0;
}

void quickSort(int array[], int low, int high) { //sorting: [low, high)
    if (high <= low+1)
        return;

    int pivot = array[low], lo = low, hi = high-1;
    while (lo < hi) {
        while (array[lo] <= pivot && lo < high)
            lo ++;
        while (array[hi] >= pivot && hi > low)
            hi --;

        if (lo < hi) {
            swap(array, lo, hi);
        }
    }

    swap(array, low, hi);
    quickSort(array, low, hi);
    quickSort(array, hi+1, high);
}

void swap(int array[], int swap1, int swap2) {
    int tmp = array[swap1];
    array[swap1] = array[swap2];
    array[swap2] = tmp;
}

int merge(int array_a[], int array_b[], int result[], int num_a, int num_b) {
    if (num_a*num_b == 0) {
        if (num_a == num_b)
            return 0;
        else if (num_b) {
            for (int i = 0; i < num_b; i ++)
                result[i] = array_b[i];
            return num_b;
        }
        else {
            for (int i = 0; i < num_a; i ++)
                result[i] = array_a[i];
            return num_a;
        }
    }

    int result_num = 0;
    int iter1 = 0, iter2 = 0;
    bool FlagbEnd = false;

    //******************************************************************************
    //the iterator is iter1(for array1's size) instead of iter(for fixed loop times)
    //
    //for (int iter = 0; iter < num_a; iter ++) {
    while (iter1 < num_a) {
        if (!FlagbEnd) {
            if (array_a[iter1] == array_b[iter2]) {
                result[result_num] = array_a[iter1];
                iter1 ++; iter2 ++;
                result_num ++;
            }
            else if (array_a[iter1] < array_b[iter2]) {
                result[result_num] = array_a[iter1];
                iter1 ++;
                result_num ++;
            }
            else {
                result[result_num] = array_b[iter2];
                iter2 ++;
                result_num ++;
            }
        }
        else {
            result[result_num] = array_a[iter1];
            result_num ++;
            iter1 ++;
        }

        FlagbEnd = iter2 >= num_b ? true: false;
    }

    if (!FlagbEnd) {
        for (;iter2 < num_b; iter2 ++) {
            result[result_num ++] = array_b[iter2];
        }
    }

    return result_num;
}

int minus(int array_a[], int array_b[], int result[], int num_a, int num_b) {
    if (!num_b) {
        for (int i = 0; i < num_a; i ++)
            result[i] = array_a[i];
        return num_a;
    }
    int result_num = 0;
    int iter1 = 0, iter2 = 0;
    bool FlagbEnd = false;

    for (; iter1 < num_a;) {
        // A - B
        if (!FlagbEnd) {
            int a = array_a[iter1], b = array_b[iter2];
            if (a == b) {
                iter1 ++; iter2 ++;
            } 
            else if (a < b) {
                result[result_num] = a;
                result_num ++;
                iter1 ++;
            }
            else {
                iter2 ++;
            }
        }
        else {
            result[result_num] = array_a[iter1];
            result_num ++;
            iter1 ++;
        }
        if (iter2 >= num_b)
            FlagbEnd = true;
    }

    return result_num;
}
