var createCounter = function(n)
{
    let count;

    count = n
    return function()
    {
        return count++;
    };
};