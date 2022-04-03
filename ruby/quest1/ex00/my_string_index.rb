def my_string_index(param_1, param_2)
    index = 0

    while  (index < param_1.length)
        if (param_1[index] == param_2)
            return index
        end
        index += 1
    end
        return -1;
end

