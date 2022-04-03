require "readline"
require "./handle.rb"

class MySqliteQueryCli
    def parse(buf)
        data = buf.split(" ");
    end

    def run!
        while buf = Readline.readline("> ", true)
            instance_of_request = parse(buf)
            handler = Handle.new
            handler.process(instance_of_request)
        end
    end
end

msqcli = MySqliteQueryCli.new
msqcli.run!