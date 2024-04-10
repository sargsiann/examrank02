typedef struct  s_point
  {
    int           x;
    int           y;

  }               t_point;

int isSafe(char **tab, t_point size, t_point p, char target) {
    return (p.x >= 0 && p.x < size.x && p.y >= 0 && p.y < size.y && tab[p.y][p.x] == target);
}

// Recursive function to fill the zone with 'F'
void flood_fill_util(char **tab, t_point size, t_point begin, char target, char replacement) {
    if (!isSafe(tab, size, begin, target))
        return;

    // Replace the character at the current point
    tab[begin.y][begin.x] = replacement;

    // Recursive calls for adjacent cells
    flood_fill_util(tab, size, (t_point){begin.x + 1, begin.y}, target, replacement);
    flood_fill_util(tab, size, (t_point){begin.x - 1, begin.y}, target, replacement);
    flood_fill_util(tab, size, (t_point){begin.x, begin.y + 1}, target, replacement);
    flood_fill_util(tab, size, (t_point){begin.x, begin.y - 1}, target, replacement);
}

// Function to perform flood fill
void flood_fill(char **tab, t_point size, t_point begin) {
    char target = tab[begin.y][begin.x]; // Character to be replaced
    char replacement = 'F'; // Replacement character
    flood_fill_util(tab, size, begin, target, replacement);
}

