TABLE = {
    'M' => 1000,
    'CM' => 900,
    'D' => 500,
    'CD' => 400,
    'C' => 100,
    'XC' => 90,
    'L' => 50,
    'XL' => 40,
    'X' => 10,
    'IX' => 9,
    'V' => 5,
    'IV' => 4,
    'I' => 1,
}

def my_roman_numerals_converter(param_1)
    TABLE.map do |letter, number|
        num, param_1 = param_1.divmod(number)
        letter * num
    end.join
end