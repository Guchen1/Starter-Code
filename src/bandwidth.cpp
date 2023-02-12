#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <vector>

int main(int argc, char **argv)
{
  // Record the time at the beginning of our experiment.
  long sum;
  int n;
  if (argc == 2)
    n = atoi(argv[1]);
  else
    n = 1000000;
  std::vector<int> v(n);
  for (int x; x < n; x++)
  {
    v[x] = x;
  }
  auto begin = std::chrono::steady_clock::now();

  // Experiment takes place here.
  // This for loop is just a placeholder.
  for (size_t i = 0; i < n; i++)
  {
    sum += v[i];
  }

  // Record the time at the end of our experiment.
  auto end = std::chrono::steady_clock::now();

  // Compute the duration of the experiment in seconds.
  double duration = std::chrono::duration<double>(end - begin).count();
  printf("Sum was %ld.\n", sum);
  printf("Runtime was %lf us (microseconds).\n", 1e6 * duration);

  return 0;
}
