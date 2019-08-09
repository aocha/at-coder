s = gets.chomp
hash = [*'a'..'z'].product([0]).to_h

s.chars.each do |char|
  hash[char] += 1
end

res = hash.find { |k, v| v.zero? }
puts res ? res[0] : 'None'
