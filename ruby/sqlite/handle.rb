require "./my_sqlite_request.rb"

class Handle

    def initialize
        @request = MySqliteRequest.new
    end

    def process(arr)
        if (arr[0] == 'SELECT')

            # EXTRACTING ATTRIBUTES
            selectAttr = [] # select attributes
            i = 1

            while (arr[i] != "FROM")
                if arr[i].include? ","
                    splitAttr = arr[i].split(",")
                    splitAttr.each do |eachAttr|
                        selectAttr.append(eachAttr)
                    end
                else
                    selectAttr.append(arr[i])
                end
                i += 1
            end

            # EXTRACTING TABLE NAME
            i += 1 # next query element after FROM will be taken which is table name
            tableName = arr[i]

            i += 1
            whereAttr = []
            p arr[i]

            # EXTRACTING WHERE ATTRIBUTE
            while (i < arr.length-1)
                i += 1
                if arr[i].include? "="
                    splitWhAttr = arr[i].split("=")
                    splitWhAttr.each do |eachAttr|
                        whereAttr.append(eachAttr)
                    end
                else
                    whereAttr.append(arr[i])
                end
            end

            # EXECUTE REQUEST
            @request.from(tableName)
            @request.select(selectAttr)
            
            if (whereAttr.length != 0)
                @request.where(whereAttr[0], whereAttr[whereAttr.length - 1])
            end

            @request.run
        elsif (arr[0] == 'UPDATE')
            p 'UpDaTe'
        elsif (arr[0] == 'iNSERT')
            p 'InSeRt'
        elsif (arr[0] == 'DELETE')
            p 'dElEtE'
        end
    end

end