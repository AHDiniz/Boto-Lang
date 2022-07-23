#ifndef UTILS_H_

#define UTILS_H_

typedef struct
{
    void *data;
    int itemSize;
    int count;
    int maxSize;
} Array;

Array CreateArray(int itemSize, int maxSize);
void *GetFromArray(Array a, int position);
void SetInArray(Array a, int position, void *data);
void PushToArray(Array *a, void *item);
void RemoveFromArray(Array *a, int position);
void PopFromArray(Array *a, void *destination);
void DeleteArray(Array a);

#endif
