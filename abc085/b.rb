n = gets.to_i
rice_cakes = []

n.times { rice_cakes << gets.to_i }

puts rice_cakes.uniq.size
