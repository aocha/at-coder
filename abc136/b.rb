n = gets.chomp
result = [*'1'..n].select { |str| str.size.odd? }
puts result.count
