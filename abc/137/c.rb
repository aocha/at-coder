n = gets.to_i
hash = Hash.new(0)
n.times do |i|
  key = gets.chomp.chars.sort.join
  hash[key] += 1
end

count = 0
hash.each do |_, v|
  next unless v > 1
  next count += 1 if v == 2
  count += (v * (v - 1)) / 2
end
puts count
