n = gets.to_i

res = []

n.times do |i|
  res[i] = 0
  num = i + 1

  loop do
    break if num % 2 != 0
    res[i] += 1
    num = num / 2
  end
end

max_cnt = res.max
puts res.index(max_cnt) + 1
