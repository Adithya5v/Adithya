#include <stdio.h>


struct Box {
    double length;
    double width;
    double height;
};


double calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box *boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    // Create a box structure
    struct Box box = {3.5, 2.7, 4.1};

    // Create a pointer to the box structure
    struct Box *boxPtr = &box;

    
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;

    
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);

     //Alternatively
     double volume1 = calculateVolume(boxPtr);
     double surfaceArea1 = calculateSurfaceArea(boxPtr);

    printf("Box Volume: %.2f\n", volume);
    printf("Box Surface Area: %.2f\n", surfaceArea);
    
    printf("Box Volume: %.2f\n", volume1);
    printf("Box Surface Area: %.2f\n", surfaceArea1);

    return 0;
}