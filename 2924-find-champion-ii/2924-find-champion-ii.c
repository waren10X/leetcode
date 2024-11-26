int findChampion(int n, int** edges, int edgesSize, int* edgesColSize)
{
    int i;
    int j;
    int isChampion;
    int champion;
    int weakerTeam;
    int* inDegree;

    inDegree = (int*)calloc(n, sizeof(int));
    champion = -1;

    for (i = 0; i < edgesSize; i++)
    {
        weakerTeam = edges[i][1];
        inDegree[weakerTeam]++;
    }
    for (i = 0; i < n; i++)
    {
        if (inDegree[i] == 0)
        {
            if (champion != -1)
            {
                return (-1);
            }
            champion = i;
        }
    }
    free (inDegree);
    return (champion);
}