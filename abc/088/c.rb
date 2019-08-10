grid = []
3.times { grid << gets.split.map(&:to_i) }

a1 = 0
b1 = grid[0][0] - a1
b2 = grid[0][1] - a1
b3 = grid[0][2] - a1
a2 = grid[1][0] - b1
a3 = grid[2][0] - b1

a = [a1, a2, a3]
b = [b1, b2, b3]

res = 'Yes'
3.times do |i|
  3.times do |j|
    break res = 'No' if grid[i][j] != a[i] + b[j]
  end
end

puts res
