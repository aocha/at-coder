n = gets.to_i
arr = gets.split.map(&:to_i)

alice_sum = 0
bob_sum = 0

arr.sort.reverse.each_slice(2) do |(n1, n2)|
  alice_sum += n1 if n1
  bob_sum += n2 if n2
end

puts alice_sum - bob_sum
