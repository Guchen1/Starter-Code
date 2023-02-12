#include <chrono>
#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv)
{
  long sum;
  int n;
  if (argc == 2)
    n = atoi(argv[1]);
  else
    n = 1000000;
  // Record the time at the beginning of our experiment.
  auto begin = std::chrono::steady_clock::now();

  // Experiment takes place here.
  // This for loop is just a placeholder.
  for (size_t i = 0; i < n; i++)
  {
    sum += i;
  }

  // Record the time at the end of our experiment.
  auto end = std::chrono::steady_clock::now();

  // Compute the duration of the experiment in seconds.
  double duration = std::chrono::duration<double>(end - begin).count();

  printf("Runtime was %lf us (microseconds).\n", 1e6 * duration);

  return 0;
}
