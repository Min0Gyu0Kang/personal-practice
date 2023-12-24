#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to check if the given sides form a right-angled triangle
int isRightTriangle(int a, int b, int c) {
    // Check the Pythagorean theorem
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return 1; // It's a right triangle
    } else {
        return 0; // It's not a right triangle
    }
}

int main(){
    int a,b,c;
    int i=0;
    int **triangles = NULL; // Pointer to an array of pointers to store sets of inputs for triangles

    // Dynamic allocation for the array
    triangles = (int **)malloc(sizeof(int *));
    if (triangles == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }
    // if a<30000, b<30000, c<30000
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        // Break the loop if all sides are 0
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        // Reallocate memory for the next set of inputs
        triangles = (int **)realloc(triangles, (i + 1) * sizeof(int *));
        // if (triangles == NULL) {
        //     printf("Memory allocation error\n");
        //     return 1;
        // }
        triangles[i] = (int *)malloc(3 * sizeof(int));
        // if (triangles[i] == NULL) {
        //     printf("Memory allocation error\n");
        //     return 1;
        // }
        // Store the inputs in the array
        triangles[i][0] = a;
        triangles[i][1] = b;
        triangles[i][2] = c;
        i++;
    }
    for (int j = 0; j < i; j++) {
        if (isRightTriangle(triangles[j][0], triangles[j][1], triangles[j][2])) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }
    return 0;
}
