# def my_csv_parser(param_1, param_2)
#    result = []
#    arr = param_1.split("\n")
#    for index in arr
#     result.append(index.split(","))
#    end
#    return result
# end

def my_csv_parser(param_1, param_2)
    param_1.split("\n").map{ |x| x.split(param_2)}
end
