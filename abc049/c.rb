s = gets.chomp
result = s.reverse.gsub(/(maerd|remaerd|esare|resare)/, '')
puts result.size.zero? ? 'YES' : 'NO'
