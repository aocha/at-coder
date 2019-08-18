N = gets.to_i # N < 100
A = gets.split.map(&:to_i) # Ai < 1000

sum = 0
N.times { |i| sum += Rational(1, A[i]) }

puts Rational(1, sum).to_f
