std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Loop condition is i < vec.size()
    std::cout << vec[i] << " ";
}
std::cout << std::endl; 
//Alternatively, use iterators for safer iteration
for (int x : vec) {
  std::cout << x << " ";
}
std::cout << std::endl;