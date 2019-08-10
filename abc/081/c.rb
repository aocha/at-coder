n, k = gets.split.map(&:to_i)
hash = Hash.new { 0 }
a = gets.split.map(&:to_i).first(n)
a.each { |i| hash[i] += 1 }

count = 0
balls = hash.values.sort
while balls.size > k do
  count += balls.shift
end

puts count
