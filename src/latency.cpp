#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <random>
#include <vector>
#include <algorithm>
int main(int argc, char **argv)
{
  // Record the time at the beginning of our experiment.
  std::random_device rd;
  std::mt19937 g(rd());

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
  int temp = n;
  int j;

  auto begin = std::chrono::steady_clock::now();

  // Experiment takes place here.
  // This for loop is just a placeholder.
  while (temp > 1)
  {
    temp--;
    j = std::uniform_int_distribution<int>(0, temp)(g);
    std::swap(v[temp], v[j]);
  }

  // Record the time at the end of our experiment.
  auto end = std::chrono::steady_clock::now();

  // Compute the duration of the experiment in seconds.
  double duration = std::chrono::duration<double>(end - begin).count();

  printf("Runtime was %lf us (microseconds).\n", 1e6 * duration);

  return 0;
}
