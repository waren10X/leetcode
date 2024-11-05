var expect = function(val)
{
    return {
        toBe(compareVal)
        {
            if (val === compareVal)
            {
                return true;
            }
            else 
            {
                throw new Error("Not Equal");
            }
        },
        notToBe(compareVal)
        {
            if (val !== compareVal)
            {
                return true;
            }
            else
            {
                throw new Error("Equal");
            }
        }
    };
};