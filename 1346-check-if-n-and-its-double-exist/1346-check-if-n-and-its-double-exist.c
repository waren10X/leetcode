bool checkIfExist(int* arr, int arrSize)
{
    int i;
    int j;

    for (i = 0; i < arrSize; i++)
    {
        for (j = 0; j < arrSize; j++)
        {
            if (i != j && arr[i] == 2 * arr[j])
            {
                return (true);
            }
        }
    }
    return (false);
}