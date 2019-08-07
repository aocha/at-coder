n = gets.to_i
heights = gets.split.map(&:to_i)

max_height = heights[0]
result = 'Yes'

(n - 1).times do |i|
  next_stair_height = heights[i + 1]

  if max_height <= next_stair_height || max_height - 1 <= next_stair_height
    max_height = [max_height, next_stair_height].max
    result = 'Yes'
  else
    result = 'No'
    break
  end
end

puts result
