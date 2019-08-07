n = gets.to_i

max_loop_cnt = (n + 4 - 1) / 4
res = 'No'

0.upto(max_loop_cnt) do |i|
  0.upto(max_loop_cnt) do |j|
    sum = i * 4 + j * 7
    break if sum > 100
    break res = 'Yes' if n == sum
  end
end

puts res
