// to finish

namespace ts {
template <typename T>
class Ts_vector {
 private:
  size_t max_size;
  size_t cur_size;
  T* arr;

 public:
  Ts_vector() {};
  ~Ts_vector() { delete[] arr; }
  Ts_vector(size_t size) : cur_size(size), max_size(size + (size / 2)) {
    arr = new T[max_size];
  }
};
}  // namespace ts