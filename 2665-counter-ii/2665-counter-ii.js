var createCounter = function(init)
{
    let currentValue = init;
    
    return{
        increment: function()
        {
            return (++currentValue);
        },
        decrement: function()
        {
            return (--currentValue);
        },
        reset: function()
        {
            currentValue = init;
            return (currentValue);
        }
    };
};