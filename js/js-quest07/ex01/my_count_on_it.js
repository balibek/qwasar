function my_count_on_it(param_1) {
    var arr = [];
    for (var i=0;i<param_1.length;i++){
        arr[i] = (param_1[i].length);
    };
    return arr;
};

my_count_on_it(["This", "is", "the", "way"]);
my_count_on_it(["aBc", "AbcE Fgef1"]);
my_count_on_it(["aBc"]);

// console.log(my_count_on_it(["This", "is", "the", "way"]));
// console.log(my_count_on_it(["aBc", "AbcE Fgef1"]));
// console.log(my_count_on_it(["aBc"]));