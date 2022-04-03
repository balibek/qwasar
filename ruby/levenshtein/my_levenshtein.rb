# fn my_levenshtein(s1: &String, s2: &String) -> i32 {
# 	...
# }

def my_levenshtein(param_1, param_2)
    if param_1.length != param_2.length
        return -1
    end
    a = 0
    for i in 0..param_1.length
        if param_1[i] != param_2[i]
            a += 1
        end
    end
    return a
end
