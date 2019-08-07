n = gets.to_i
arr = []
result = 'No'

n.times { arr << gets.split.map(&:to_i) }

arr.each.with_index(1) do |(t, x, y), i|
  break if t < (x + y) || (x + y + t) % 2 != 0
  result = 'Yes' if i == n
end

puts result
