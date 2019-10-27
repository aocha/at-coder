require 'prime'

n = gets.to_i

if Prime.prime?(n)
  puts n - 1
else
  ans = 0
  Math.sqrt(n).to_i.downto(1) do |i|
    quo, rem = n.divmod(i)
    break ans = (i - 1) + (quo - 1) if rem.zero?
  end
  puts ans
end
