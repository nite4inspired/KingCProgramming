#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //initialize map
  char map[10][10];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      map[i][j] = '.';
    }
  }
  map[0][0] = 'A';

  srand((unsigned) time(NULL));
  int x = 0, y = 0;
  int notsurrounded;
  char around[4];
  for (char c = 'B'; c <= 'Z'; c++) {
    if (x+1 >= 10) around[0] = 'X';
    else if (map[x+1][y] != '.') around[0] = 'X';
    else around[0] = 'Y';
    if (y+1 >= 10) around[1] = 'X';
    else if (map[x][y+1] != '.') around[1] = 'X';
    else around[1] = 'Y';
    if (x-1 < 0) around[2] = 'X';
    else if (map[x-1][y] != '.') around[2] = 'X';
    else around[2] = 'Y';
    if (y-1 < 0) around[3] = 'X';
    else if (map[x][y-1] != '.') around[3] = 'X';
    else around[3] = 'Y';
    notsurrounded = 0;
    for (int i = 0; i < 4; i++) {
      if (around[i] == 'Y') {notsurrounded = 1; break;}
    }
    if (!notsurrounded) {
      printf("%c: ", map[x][y]);
      for (int i = 0; i < 4; i++) {
        printf("%c ", around[i]);
      }
      printf("\n");
      break;
    }
    int move;
    do {
      move = rand() % 4;
      if (around[move] == 'X') continue;
      else {
        switch(move) {
          case 0: map[x+1][y] = c; x++; break;
          case 1: map[x][y+1] = c; y++; break;
          case 2: map[x-1][y] = c; x--; break;
          case 3: map[x][y-1] = c; y--; break;
        }
        break;
      }
    } while(1);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%c ", map[j][i]);
    }
    printf("\n");
  }
  printf("\n");
}

/*
//IMPROVED CODE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char map[10][10];
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Up, Down, Left, Right
    int x = 0, y = 0, dx, dy, nextX, nextY, valid, attempts;

    // Initialize map
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            map[i][j] = '.';
        }
    }

    srand(time(NULL));
    map[x][y] = 'A'; // Starting point

    for (char c = 'B'; c <= 'Z'; c++) {
        valid = 0;
        attempts = 0;
        while (attempts < 100) { // Attempt to find a valid move up to 100 times
            int dir = rand() % 4;
            dx = directions[dir][0];
            dy = directions[dir][1];
            nextX = x + dx;
            nextY = y + dy;

            if (nextX >= 0 && nextX < 10 && nextY >= 0 && nextY < 10 && map[nextX][nextY] == '.') {
                map[nextX][nextY] = c;
                x = nextX;
                y = nextY;
                valid = 1;
                break;
            }
            attempts++;
        }
        if (!valid) {
            printf("Stopped at %c: No valid moves left.\n", c);
            break;
        }
    }

    // Print the map
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/