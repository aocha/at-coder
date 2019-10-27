N = gets.to_i
ans = 'No'

1.upto(9) do |a|
  1.upto(9) do |b|
    break ans = 'Yes' if a * b == N
  end
end

puts ans
