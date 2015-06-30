//
//  main.c
//  Adam
//
//  Created by Tyler Yan on 2015-06-30.
//  Copyright (c) 2015 Foodee. All rights reserved.
//

#include <stdio.h>
typedef struct boxes {
    
    float height;
    float width;
    float length;
    
} boxNew;

float volume();

float boxStruct();

float compareBoxes();

float search();

int main(void) {
    
    boxNew someBox;
    
    someBox.height = 5.0;
    someBox.width = 6.0;
    someBox.length = 8.0;
    
    boxNew someOtherBox;
    someOtherBox.height = 8.0;
    someOtherBox.width = 8.0;
    someOtherBox.length = 8.0;
    
    volume(someBox);
    boxStruct(someBox);
    compareBoxes(someBox, someOtherBox);
    
    int array[] = {5,11,15,38,60};
    int size = 5;
    int target = 3;
    search(array, size, target);
    
    return 0;
}

float volume(boxNew someBox){
    
    float result = someBox.length*someBox.height*someBox.width;
    printf("%f\n",result);
    return result;

}


float boxStruct(boxNew someBox){
    
    printf("%f height, %f width, %f length\n", someBox.height, someBox.width, someBox.length);

    return 0;
}

    
float compareBoxes(boxNew someBox, boxNew someOtherBox){
    
    float result = (someOtherBox.height*someOtherBox.width*someOtherBox.length)/ (someBox.height*someBox.width*someBox.length);
    
    printf("someOtherBox is equal to %f of someBox\n", result);
    
    
    return result;
}

float search(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target){
            
            printf("Found at index %d\n", i);
            
            return 0;
        }
    }
    

    
    return printf("-1\n");
        
}




