require 'date'

# def order_at(hour)
#     if (hour >= 6 and hour < 12)
#         return "morning" # => 06:00am -> 11:59am
#     elsif (hour >= 12 and hour < 18)
#         return "afternoon" # => 12:00pm -> 5:59pm
#     elsif (hour >= 18 and hour < 24)
#         return "evening" # => 6:00pm -> 11:59pm
#     end
# end

def my_data_transform(param_1)
    result = param_1.split("\n").map{ |c| c.split(",")}
    result.map!.with_index do |parent, i|
        if (i > 0)
            parent.map!.with_index do |child, j|
                if (j == 4)
                    child.split('@').last
                elsif (j == 5)
                case child.to_i
                when 1..20
                    "1->20"
                when 21..40
                    "21->40"
                when 41..65
                    "41->65"
                when 66..99
                    "66->99"
                else
                    "error"
                end
            elsif (j == 9)
                case DateTime.parse("#{child}", '%y-%m-%d %H:%M:%S').hour
                when 6...12
                    "morning"
                when 12...18
                    "afternoon"
                when 18...24
                    "evening"
                else 
                    "error"
                end
            else
                child
            end
        end
    end
       parent.join(',')
   end
end