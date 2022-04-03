function my_average_mark(param_1) {
    var a = 0;
    for (var i = 0; i < param_1.length; i++) {
        a += param_1[i]["integer"]
    }
    var avr = a/param_1.length
        if (param_1.length == 0) {
             return `0.0`
        }
        else {
            return avr.toFixed(1)
        }
    }

// console.log(my_average_mark([
//         {"string": "John", "integer": 7},
//         {"string": "Margot", "integer": 8},
//         {"string": "Jules", "integer": 4},
//         {"string": "Marco", "integer": 19}
//        ]));

// console.log(my_average_mark([
//         {"string": "Quentin", "integer": 1},
//         {"string": "Fred", "integer": 1},
//         {"string": "Julia", "integer": 18},
//         {"string": "stephanie", "integer": 13}
//        ]));
// console.log(my_average_mark([]));