n, a, b = gets.split.map(&:to_i)

total = 0

1.upto(n) do |num|
  sum = num.to_s.chars.map(&:to_i).inject(:+)
  total += num if a <= sum && sum <= b
end

puts total
