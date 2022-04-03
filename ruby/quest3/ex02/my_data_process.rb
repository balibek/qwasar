# def my_data_transform(param_1)
#     result = param_1.split("\n").map{ |c| c.split(",")}
# end

def my_data_process(param_1)
    result = param_1.map{ |c| c.split(",")}
    hash = Hash.new
    title = {}
    result.map.with_index do |parent, i|
        indexes = [1, 2, 3, 8]
        if (i == 0)
            parent.map.with_index do |child, j|
                if !indexes.include?(j)
                    hash[child] = {}
                    title[j] = child 
                end
            end
        else
            parent.map.with_index do |child, j|
                if !indexes.include?(j)
                    if !hash[title[j]].include?(child)
                        hash[title[j]][child] = 1
                    else
                        hash[title[j]][child] += 1
                    end
                end
            end
        end
    end
    hash.to_s.gsub('=>', "\:").gsub(', ', ',')
end