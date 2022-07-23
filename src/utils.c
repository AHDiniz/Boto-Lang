#include "pch.h"
#include "utils.h"

Array CreateArray(int itemSize, int maxSize)
{
    Array a;

    a.data = calloc(maxSize, itemSize);
    memset(a.data, 0, itemSize * maxSize);
    a.count = 0;
    a.itemSize = itemSize;
    a.maxSize = maxSize;

    return a;
}

void DeleteArray(Array a)
{
    free(a.data);
}

void *GetFromArray(Array a, int position)
{
    return (position < 0 || position >= a.count) ? NULL : a.data + (position * a.itemSize); 
}

void SetInArray(Array a, int position, void *data)
{
    if (position < 0 || position >= a.count)
        return;
    void *dest = a.data + (position * a.itemSize);
    memcpy(dest, data, a.itemSize);
}

void PushToArray(Array *a, void *item)
{
    if (a->count + 1 > a->maxSize)
    {
        void *newData = calloc(2 * a->maxSize, a->itemSize);
        memset(newData, 0, 2 * a->maxSize * a->itemSize);
        memcpy(newData, a->data, a->maxSize * a->itemSize);
        free(a->data);
        a->data = newData;
        a->maxSize *= 2;
    }

    void *dest = a->data + ((a->count - 1) * a->itemSize);
    memcpy(dest, item, a->itemSize);
    ++(a->count);
}

void RemoveFromArray(Array *a, int position)
{
    if (a->count <= 0)
        return;
    void *target = a->data + (position * a->itemSize);
    memset(target, 0, a->itemSize);
    --(a->count);
}

void PopFromArray(Array *a, void *destination)
{
    if (a->count <= 0)
        return;
    void *last = a->data + ((a->count - 1) * a->itemSize);
    memcpy(destination, last, a->itemSize);
    memset(last, 0, a->itemSize);
    --(a->count);
}
