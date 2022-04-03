function my_array_uniq(param_1) {
   var unique = param_1.filter((v, i, a) => a.indexOf(v) === i);
   return unique;
};

my_array_uniq([1, 1, 2]);
my_array_uniq([]);
my_array_uniq([1, 1, 1, 2, 3, 4, 1]);

