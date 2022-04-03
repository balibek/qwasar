require "./my_sqlite_request.rb"

class Handle

    def initialize
        self.request = MySqliteRequest.new
    end

    def process(arr)
        if (arr[0] == 'SELECT')
            p "sElEcT"
          selectAttr = arr[1].split(",")

            if (selectAttr.length == 1)
                selectAttr = selectAttr[0]
            end

            tableName = arr[3]
            whereAttr = nil

            if (arr.length >= 5)
                whereAttr = []
                whereData = arr[5].split("=")
                whereAttr.column = whereData[0]
                whereAttr.criteria = whereData[1]
            end
            
            self.request.select(selectAttr)
            self.request.from(tableName)

            if (whereAttr != nil)
                self.request.where(whereAttr.column, whereAttr.criteria)
        end
=end  
 #       elsif (arr[0] == 'UPDATE')
 #           self.request.update(arr[1])
        #    p 'UpDaTe'
        
  #      elsif (arr[0] == 'iNSERT')
     #       p 'InSeRt'
=begin           table_name = arr[2]
            vals = arr[4].slice(1, arr[4].length - 1).split(",")
            self.request.insert(table_name)
            self.request.values({
                name : values[0],
                email : values[1],
                grade : values[2]#,
#               blog : values[3]
          })
=end  #  elsif (arr[0] == 'DELETE')
        #    p 'dElEtE'
=begin            self.request.delete()
            self.request.from(arr[2])
            whereAttr = nil

            if (arr.length >= 5)
                whereAttr = []
                whereData = arr[4].split("=")
                whereAttr.column = whereData[0]
                whereAttr.criteria = whereData[1]
            end
            if (whereAttr != nil) 
                this.request.where(whereAttr.column, whereAttr.criteria)
            end
=end   # end
   # end
#end
