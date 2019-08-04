a, b, c = gets.split.map(&:to_i)

result = c - (a - b)
puts result >= 0 ? result : 0
