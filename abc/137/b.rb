k, x = gets.split.map(&:to_i)

min_x = x - (k - 1)
max_x = x + (k - 1)

puts [*min_x..max_x].join(' ')
