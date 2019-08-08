def digit_sum(num)
  sum = 0
  while num > 0 do
    sum += num % 10
    num /= 10
  end
  sum
end

n = gets.to_i

min = n
1.upto(n / 2) do |i|
  digit_sum = digit_sum(i) + digit_sum(n - i)
  min = digit_sum if min > digit_sum
end

puts min
