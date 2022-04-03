require 'csv'

class MySelectQuery
    def initialize(content)
        @data = CSV.parse(content, headers: true)
    end

    def where (column, criteria)
        result = []
        @data.each do |row|
            if row[column] == criteria
                result.push(row.to_hash.values.join(','))
            end
        end
        result
    end
end

    content = "name,year_start,year_end,position,height,weight,birth_date,college\nAlaa Abdelnaby,1991,1995,F-C,6-10,240,'June 24, 1968',Duke University\nZaid Abdul-Aziz,1969,1978,C-F,6-9,235,'April 7, 1946',Iowa State University\nKareem Abdul-Jabbar,1970,1989,C,7-2,225,'April 16, 1947','University of California, Los Angeles
    Mahmoud Abdul-Rauf,1991,2001,G,6-1,162,'March 9, 1969',Louisiana State University\n"

    instance = MySelectQuery.new(content)
    instance.where('name', 'Mahmoud Abdul-Rauf')
