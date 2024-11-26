int findChampion(int** grid, int gridSize, int* gridColSize)
{
    int j;
    int isChampion;

    for (int i = 0; i < gridSize; i++)
    {
        isChampion = 1;
        for (j = 0; j < gridSize; j++)
        {
            if (i != j)
            {
                if (grid[j][i] == 1)
                {
                    isChampion = 0;
                }
            }
        }
        if (isChampion == 1)
        {
            return (i);
        }
    }
    return (-1);
}