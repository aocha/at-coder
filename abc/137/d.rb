class BinaryHeap
  attr_reader :nodes

  def initialize
    @nodes = []
  end

  def push(node)
    nodes << node
    index = nodes.size - 1

    up_heap(index)
  end


  def pop
    node = nodes.pop
    return if nodes.size.zero?

    nodes[0] = node

    heap_down(0)
  end

  private

  def up_heap(index)
    return if index.zero?

    parent_index = (index - 1) / 2
    parent_node = nodes[parent_index]

    return if parent_node > nodes[index]

    nodes[parent_index] = nodes[index]
    nodes[index] = parent_node

    up_heap(parent_index)
  end

  def heap_down(parent_index)
    parent_node = nodes[parent_index]

    left_child_index = 2 * parent_index + 1
    right_child_index = 2 * (parent_index + 1)

    left_child_node, right_child_node = nodes.values_at(left_child_index, right_child_index)
    return if left_child_node.nil? && right_child_node.nil?

    max_node = [parent_node, left_child_node, right_child_node].compact.max
    return if max_node == parent_node

    if max_node == left_child_node
      nodes[left_child_index] = parent_node
      nodes[parent_index] = left_child_node
      heap_down(left_child_index)
    else
      nodes[right_child_index] = parent_node
      nodes[parent_index] = right_child_node
      heap_down(right_child_index)
    end
  end
end

class PriorityQueue
  def initialize
    @heap = BinaryHeap.new
  end

  def queue
    @heap.nodes
  end

  def enqueue(element)
    @heap.push(element)
  end

  def dequeue
    element = @heap.nodes[0]
    @heap.pop
    element
  end
end

# ----- Greedy, Priority Queue -----
N, M = gets.split.map(&:to_i)
h = Hash.new { |h, k| h[k] = [] }
queue = PriorityQueue.new
cnt = 0

N.times do
  a, b = gets.split.map(&:to_i)
  h[a] << b
end

1.upto(M) do |i|
  Array(h[i]).each { |b| queue.enqueue(b) }
  next if queue.queue.size.zero?

  cnt += queue.dequeue
end

p cnt
