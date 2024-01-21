#include <stdio.h>
#include <stdlib.h>

// Compare numbers and arrange from lowest(negative posX posY) to highest value (positive posX posY)
typedef struct {
    int posX;
    int posY;
} Plane;

// Comparison function for qsort
int comparePairs(const void *a, const void *b) {
    // Cast the void pointers to Plane pointers
    const Plane *planeA = (const Plane *)a;
    const Plane *planeB = (const Plane *)b;

    // Compare based on posX
    int posXComparison = planeA->posX - planeB->posX;

    // If posX values are different, return the comparison result
    if (posXComparison != 0) {
        return posXComparison;
    }

    // If posX values are equal, compare based on posY
    return planeA->posY - planeB->posY;
}

int main() {
    int N;
    scanf("%d", &N);
    Plane arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i].posX, &arr[i].posY);  // X Y of <=-100000 to >=1000000
    }

    // Use qsort for efficient sorting
    qsort(arr, N, sizeof(Plane), comparePairs);

    for (int i = 0; i < N; i++) {
        printf("%d %d\n", arr[i].posX, arr[i].posY);
    }

    return 0;
}
