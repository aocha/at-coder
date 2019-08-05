s = gets.chomp

res = ''

s.size.times do |i|
  res += s[i] if (i + 1) % 2 != 0
end

puts res
