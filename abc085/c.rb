n, y = gets.split.map(&:to_i)

result = '-1 -1 -1'

0.upto(n) do |i|
  0.upto(n) do |j|
    remaining = n - (i + j)
    next unless remaining >= 0 && (i * 10000 + j * 5000 + remaining * 1000) == y
    result = [i, j, remaining].join(' ')
  end
end

puts result
