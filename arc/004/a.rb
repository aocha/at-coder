n = gets.to_i
arr = []
n.times { arr << gets.split.map(&:to_i) }

res = 0

n.times do |i|
  n.times do |j|
    next if i == j
    x = (arr[i][0] - arr[j][0])
    y = (arr[i][1] - arr[j][1])
    distance = Math.sqrt(x**2 + y**2)
    res = distance if res < distance
  end
end

puts res
