n = gets.to_i
hash_b = Hash.new(0)
n.times { hash_b[gets.chomp] += 1 }

m = gets.to_i
hash_r = Hash.new(0)
m.times { hash_r[gets.chomp] += 1 }

res = []
hash_b.each do |k, v|
  res << v -= hash_r[k] || 0
end

puts res.max > 0 ? res.max : 0
