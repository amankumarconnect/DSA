/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let currValue = init;

    const obj = {
        increment: function(){
            return ++currValue;
        },
        decrement: function(){
            return --currValue;
        },
        reset: function(){
            currValue = init;
            return currValue;
        }
    }
    return obj;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
