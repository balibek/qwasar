function my_map_mult_two(param_1) {
    for (var i = 0; i < param_1.length; i++) {
        param_1[i] *= 2;
    }
    return param_1;
};
my_map_mult_two([1, 2, 3, 4, 5]);
my_map_mult_two([]);

// console.log(my_map_mult_two([1, 2, 3, 4, 5]));
// console.log(my_map_mult_two([]));

// let arr = [1, 2, 3, 4, 5];

// let result = arr.map(function(my_map_mult_two) {
//   return my_map_mult_two * 2;
// });

