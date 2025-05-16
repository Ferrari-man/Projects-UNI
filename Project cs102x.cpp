#include <iostream>
#include <conio.h>
using namespace std;

int FacingRight = 1;
int FacingLeft = 0;


void drawbackground(char x[200][500])
{
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            x[i][j] = ' ';
        }
    }
}
void drawFancyFloor(char x[200][500], int row, int col) {
    // Line 1: top decorative line
    for (int c = 0; c < 500; c++)
    {

        x[row][col + c] = '+';
        x[row][col + c] = '-';
        x[row][col + c] = '-';

        // Bottom shaded area
        x[row + 1][col + c] = '|';
        x[row + 1][col + c] = '.';
        x[row + 1][col + c] = '.';


    }
}
void drawCloud(char x[][500], int r, int c) {
    // Row 1
    x[r][c + 0] = '_';
    x[r][c + 1] = '(';
    x[r][c + 2] = ' ';
    x[r][c + 3] = ' ';
    x[r][c + 4] = ')';
    x[r][c + 5] = '_';
    x[r][c + 6] = '(';
    x[r][c + 7] = ' ';
    x[r][c + 8] = ')';
    x[r][c + 9] = '_';

    // Row 2
    x[r + 1][c + 0] = '(';
    x[r + 1][c + 1] = '_';
    x[r + 1][c + 2] = ' ';
    x[r + 1][c + 3] = ' ';
    x[r + 1][c + 4] = ' ';
    x[r + 1][c + 5] = '_';
    x[r + 1][c + 6] = ' ';
    x[r + 1][c + 7] = ' ';
    x[r + 1][c + 8] = ' ';
    x[r + 1][c + 9] = '_';
    x[r + 1][c + 10] = ')';

    // Row 3
    x[r + 2][c + 2] = '(';
    x[r + 2][c + 3] = '_';
    x[r + 2][c + 4] = ')';
    x[r + 2][c + 5] = ' ';
    x[r + 2][c + 6] = '(';
    x[r + 2][c + 7] = '_';
    x[r + 2][c + 8] = '_';
    x[r + 2][c + 9] = ')';
}
void drawSpikedGround(char x[][500], int rfloor, int cfloor) {
    for (int c = 50; c < cfloor; c++) {
        x[rfloor][c] = 'v';
    }
}
void drawSpikedGround2(char x[][500], int rfloor, int cfloor) {
    for (int c = 20; c < cfloor; c++) {
        x[rfloor][c] = 'v';
    }
}
void drawOwl(char x[][500], int row, int col) {
    x[row + 0][col + 0] = ' ';
    x[row + 0][col + 1] = ',';
    x[row + 0][col + 2] = '_';
    x[row + 0][col + 3] = ',';

    x[row + 1][col + 0] = '(';
    x[row + 1][col + 1] = 'O';
    x[row + 1][col + 2] = ',';
    x[row + 1][col + 3] = 'O';
    x[row + 1][col + 4] = ')';

    x[row + 2][col + 0] = '(';
    x[row + 2][col + 1] = ' ';
    x[row + 2][col + 2] = ' ';
    x[row + 2][col + 3] = ' ';
    x[row + 2][col + 4] = ')';

    x[row + 3][col + 0] = '-';
    x[row + 3][col + 1] = '"';
    x[row + 3][col + 2] = '-';
    x[row + 3][col + 3] = '"';
    x[row + 3][col + 4] = '-';
}
void drawDogleft(char x[][500], int row, int col) {
    x[row + 0][col + 2] = '_';
    x[row + 0][col + 3] = '=';
    x[row + 0][col + 4] = ',';
    x[row + 0][col + 5] = '_';

    x[row + 1][col + 1] = 'o';
    x[row + 1][col + 2] = '_';
    x[row + 1][col + 3] = '/';
    x[row + 1][col + 4] = '6';
    x[row + 1][col + 5] = ' ';
    x[row + 1][col + 6] = '/';
    x[row + 1][col + 7] = '#';
    x[row + 1][col + 8] = '\\';

    x[row + 2][col + 1] = '\\';
    x[row + 2][col + 2] = '_';
    x[row + 2][col + 3] = '_';
    x[row + 2][col + 4] = ' ';
    x[row + 2][col + 5] = '|';
    x[row + 2][col + 6] = '#';
    x[row + 2][col + 7] = '#';
    x[row + 2][col + 8] = '/';

    x[row + 3][col + 2] = '=';
    x[row + 3][col + 3] = '\'';
    x[row + 3][col + 4] = '|';
    x[row + 3][col + 5] = '-';
    x[row + 3][col + 6] = '-';
    x[row + 3][col + 7] = '\\';

    x[row + 4][col + 5] = '/';
    x[row + 4][col + 6] = ' ';
    x[row + 4][col + 7] = ' ';
    x[row + 4][col + 8] = ' ';
    x[row + 4][col + 9] = '#';
    x[row + 4][col + 10] = '\'';
    x[row + 4][col + 11] = '-';
    x[row + 4][col + 12] = '.';

    x[row + 5][col + 4] = '\\';
    x[row + 5][col + 5] = '#';
    x[row + 5][col + 6] = '|';
    x[row + 5][col + 7] = '_';
    x[row + 5][col + 8] = ' ';
    x[row + 5][col + 9] = ' ';
    x[row + 5][col + 10] = '_';
    x[row + 5][col + 11] = '\'';
    x[row + 5][col + 12] = '-';
    x[row + 5][col + 13] = '.';
    x[row + 5][col + 14] = ' ';
    x[row + 5][col + 15] = '/';

    x[row + 6][col + 6] = '|';
    x[row + 6][col + 7] = '/';
    x[row + 6][col + 8] = ' ';
    x[row + 6][col + 9] = '\\';
    x[row + 6][col + 10] = '_';
    x[row + 6][col + 11] = '(';
    x[row + 6][col + 12] = ' ';
    x[row + 6][col + 13] = '#';
    x[row + 6][col + 14] = ' ';
    x[row + 6][col + 15] = '|';
    x[row + 6][col + 16] = '\"';

    x[row + 7][col + 7] = 'C';
    x[row + 7][col + 8] = '/';
    x[row + 7][col + 9] = ' ';
    x[row + 7][col + 10] = ',';
    x[row + 7][col + 11] = '-';
    x[row + 7][col + 12] = '-';
    x[row + 7][col + 13] = '_';
    x[row + 7][col + 14] = '_';
    x[row + 7][col + 15] = '_';
    x[row + 7][col + 16] = '/';
}
void drawDogRight(char x[][500], int row, int col) {
    x[row + 0][col + 0] = '_';
    x[row + 0][col + 1] = ',';
    x[row + 0][col + 2] = '=';
    x[row + 0][col + 3] = '_';

    x[row + 1][col + 0] = '/';
    x[row + 1][col + 1] = '#';
    x[row + 1][col + 2] = '\\';
    x[row + 1][col + 3] = ' ';
    x[row + 1][col + 4] = '6';
    x[row + 1][col + 5] = '\\';
    x[row + 1][col + 6] = '_';
    x[row + 1][col + 7] = 'o';

    x[row + 2][col + 0] = '/';
    x[row + 2][col + 1] = '#';
    x[row + 2][col + 2] = '#';
    x[row + 2][col + 3] = '|';
    x[row + 2][col + 4] = ' ';
    x[row + 2][col + 5] = '_';
    x[row + 2][col + 6] = '_';
    x[row + 2][col + 7] = '/';

    x[row + 3][col + 0] = '/';
    x[row + 3][col + 1] = '-';
    x[row + 3][col + 2] = '-';
    x[row + 3][col + 3] = '|';
    x[row + 3][col + 4] = '\'';
    x[row + 3][col + 5] = '=';

    x[row + 4][col + 0] = '.';
    x[row + 4][col + 1] = '-';
    x[row + 4][col + 2] = '\'';
    x[row + 4][col + 3] = '#';
    x[row + 4][col + 4] = ' ';
    x[row + 4][col + 5] = ' ';
    x[row + 4][col + 6] = ' ';
    x[row + 4][col + 7] = '\\';

    x[row + 5][col + 0] = '/';
    x[row + 5][col + 1] = '.';
    x[row + 5][col + 2] = '-';
    x[row + 5][col + 3] = '\'';
    x[row + 5][col + 4] = '_';
    x[row + 5][col + 5] = ' ';
    x[row + 5][col + 6] = '_';
    x[row + 5][col + 7] = '|';
    x[row + 5][col + 8] = '#';
    x[row + 5][col + 9] = '/';

    x[row + 6][col + 0] = '\"';
    x[row + 6][col + 1] = '|';
    x[row + 6][col + 2] = ' ';
    x[row + 6][col + 3] = '#';
    x[row + 6][col + 4] = ' ';
    x[row + 6][col + 5] = ')';
    x[row + 6][col + 6] = '_';
    x[row + 6][col + 7] = '/';
    x[row + 6][col + 8] = ' ';
    x[row + 6][col + 9] = '\\';

    x[row + 7][col + 0] = '/';
    x[row + 7][col + 1] = '_';
    x[row + 7][col + 2] = '_';
    x[row + 7][col + 3] = '_';
    x[row + 7][col + 4] = '-';
    x[row + 7][col + 5] = '-';
    x[row + 7][col + 6] = ',';
    x[row + 7][col + 7] = ' ';
    x[row + 7][col + 8] = '\\';
    x[row + 7][col + 9] = 'C';
}
void drawLazerenemy(char x[][500], int Rl, int Cl)
{
    x[Rl][Cl] = '-';
}

void Elvator(char x[][500], int re, int ce)
{

    for (int c = ce; c < ce + 10; c++)
    {
        x[re][c + 1] = '-';
    }

}
void moveelvator(char x[][500], int& r, int& c, int& dir, int& rh, int& ch, int& flagElvatorHero)
{
    int heroOnElevator = 0;

    if (rh + 7 == r && ch >= c && ch <= c + 10)
    {
        heroOnElevator = 1;
    }

    if (dir == 1)
    {
        r--;
        c--;
        if (heroOnElevator)
        {
            rh--;
            ch--;
            flagElvatorHero = 1;
        }

        if (r == 8)
        {
            dir = -1;
        }
    }

    else if (dir == -1)
    {
        r++;
        c++;
        if (heroOnElevator)
        {
            rh++;
            ch++;
            flagElvatorHero = 1;
        }


        if (r == 17)
        {
            dir = 1;
        }
    }


    if (!heroOnElevator)
    {
        flagElvatorHero = 0;
    }
}

int enemyBulletExists(int enemyBulletCount) {
    return enemyBulletCount > 0;
}
void moveClouds(int& Ccloud, int& Ccloud2, int& Ccloud3) {

    Ccloud += 1;
    Ccloud2 += 2;
    Ccloud3 += 1;


    if (Ccloud > 500) Ccloud = -10;
    if (Ccloud2 > 500) Ccloud2 = -10;
    if (Ccloud3 > 500) Ccloud3 = -10;
}

void drawLives(char x[][500], int heroLives) {

    x[1][5] = 'L';
    x[1][6] = 'I';
    x[1][7] = 'V';
    x[1][8] = 'E';
    x[1][9] = 'S';
    x[1][10] = ':';
    x[1][11] = ' ';


    x[1][12] = '0' + heroLives;
}

void checkHeroHit(int rhero, int chero, int bulletRows[], int bulletCols[], int bulletDirections[],
    int& bulletCount, int& heroLives) {
    int heroWidth = 10;
    int heroHeight = 7;

    for (int i = 0; i < bulletCount; i++) {
        if (bulletRows[i] >= rhero && bulletRows[i] < rhero + heroHeight &&
            bulletCols[i] >= chero && bulletCols[i] < chero + heroWidth) {

            for (int j = i; j < bulletCount - 1; j++) {
                bulletRows[j] = bulletRows[j + 1];
                bulletCols[j] = bulletCols[j + 1];
                bulletDirections[j] = bulletDirections[j + 1];
            }
            bulletCount--;
            i--;

            if (heroLives > 0) {
                heroLives--;
            }

            return;
        }
    }
}
void fire_enemy_bullet(char x[][500], int r, int c, int direction, int enemyBulletRows[], int enemyBulletCols[], int enemyBulletDirections[], int& enemyBulletCount) {
    int MAX_ENEMY_BULLETS = 50;

    if (enemyBulletCount < MAX_ENEMY_BULLETS) {
        enemyBulletRows[enemyBulletCount] = r;
        enemyBulletCols[enemyBulletCount] = c;
        enemyBulletDirections[enemyBulletCount] = direction;
        enemyBulletCount++;
    }
}
void update_enemy_bullets(char x[][500], int enemyBulletRows[], int enemyBulletCols[], int enemyBulletDirections[], int& enemyBulletCount) {
    for (int i = 0; i < enemyBulletCount; i++) {
        enemyBulletCols[i] += enemyBulletDirections[i];

        if (enemyBulletCols[i] < 0 || enemyBulletCols[i] >= 500) {
            for (int j = i; j < enemyBulletCount - 1; j++) {
                enemyBulletRows[j] = enemyBulletRows[j + 1];
                enemyBulletCols[j] = enemyBulletCols[j + 1];
                enemyBulletDirections[j] = enemyBulletDirections[j + 1];
            }
            enemyBulletCount--;
            i--;
        }
        else {
            x[enemyBulletRows[i]][enemyBulletCols[i]] = 'o';
        }
    }
}

void drawladder(char x[][500], int rladder, int cladder) {
    for (int i = 0; i < 18; i++) {
        x[rladder - i][cladder] = '|';
        x[rladder - i][cladder + 4] = '|';

        if (i % 2 == 0) {
            x[rladder - i][cladder + 2] = '-';
            x[rladder - i][cladder + 3] = '-';
        }
    }
}
void drawCactus(char x[][500], int row, int col) {
    x[row + 0][col + 2] = '_';
    x[row + 0][col + 4] = '_';

    x[row + 1][col + 1] = '|';
    x[row + 1][col + 2] = ' ';
    x[row + 1][col + 3] = '|';
    x[row + 1][col + 4] = '|';
    x[row + 1][col + 5] = ' ';
    x[row + 1][col + 6] = '_';

    x[row + 2][col + 0] = '-';
    x[row + 2][col + 1] = '|';
    x[row + 2][col + 2] = ' ';
    x[row + 2][col + 3] = '|';
    x[row + 2][col + 4] = '|';
    x[row + 2][col + 5] = ' ';
    x[row + 2][col + 6] = '|';

    x[row + 3][col + 1] = '|';
    x[row + 3][col + 2] = ' ';
    x[row + 3][col + 3] = '|';
    x[row + 3][col + 4] = '|';
    x[row + 3][col + 5] = ' ';
    x[row + 3][col + 6] = '|';
    x[row + 3][col + 7] = '-';

    x[row + 4][col + 2] = '\\';
    x[row + 4][col + 3] = '_';
    x[row + 4][col + 5] = '|';
    x[row + 4][col + 6] = '|';

    x[row + 5][col + 4] = '|';
    x[row + 5][col + 6] = '_';
    x[row + 5][col + 7] = '/';

    x[row + 6][col + 3] = '-';
    x[row + 6][col + 4] = '|';
    x[row + 6][col + 5] = ' ';
    x[row + 6][col + 6] = '\\';

    x[row + 7][col + 4] = '|';
    x[row + 7][col + 5] = '_';
    x[row + 7][col + 6] = '|';
    x[row + 7][col + 7] = '-';
}
void drawheroright(char x[][500], int r, int c) {
    // Line 0
    x[r + 0][c + 0] = '/';  x[r + 0][c + 1] = '\\';  x[r + 0][c + 2] = ' ';  x[r + 0][c + 3] = ' ';  x[r + 0][c + 4] = ' ';  x[r + 0][c + 5] = ' ';  x[r + 0][c + 6] = '_';  x[r + 0][c + 7] = '/';  x[r + 0][c + 8] = '\\';

    // Line 1
    x[r + 1][c + 0] = '/';  x[r + 1][c + 1] = ' ';  x[r + 1][c + 2] = 'o';  x[r + 1][c + 3] = ' ';  x[r + 1][c + 4] = ' ';  x[r + 1][c + 5] = 'o';  x[r + 1][c + 6] = ' ';  x[r + 1][c + 7] = ' ';  x[r + 1][c + 8] = '\\';

    // Line 2
    x[r + 2][c + 0] = '(';  x[r + 2][c + 1] = ' ';  x[r + 2][c + 2] = '=';  x[r + 2][c + 3] = '=';  x[r + 2][c + 4] = ' ';  x[r + 2][c + 5] = '^';  x[r + 2][c + 6] = ' ';  x[r + 2][c + 7] = '=';  x[r + 2][c + 8] = '=';  x[r + 2][c + 9] = ' ';  x[r + 2][c + 10] = ')';

    // Line 3
    x[r + 3][c + 0] = ')';  x[r + 3][c + 1] = ' ';  x[r + 3][c + 2] = ' ';  x[r + 3][c + 3] = ' ';  x[r + 3][c + 4] = ' ';  x[r + 3][c + 5] = ' ';  x[r + 3][c + 6] = ' ';  x[r + 3][c + 7] = ' ';  x[r + 3][c + 8] = ' ';  x[r + 3][c + 9] = '(';

    // Line 4
    x[r + 4][c + 0] = '(';  x[r + 4][c + 1] = ' ';  x[r + 4][c + 2] = ' ';  x[r + 4][c + 3] = ' ';  x[r + 4][c + 4] = ' ';  x[r + 4][c + 5] = ' ';  x[r + 4][c + 6] = ' ';  x[r + 4][c + 7] = ' ';  x[r + 4][c + 8] = ' ';  x[r + 4][c + 9] = ')';

    // Line 5
    x[r + 5][c + 0] = '(';  x[r + 5][c + 1] = ' ';  x[r + 5][c + 2] = '(';  x[r + 5][c + 3] = ' ';  x[r + 5][c + 4] = ')';  x[r + 5][c + 5] = ' ';  x[r + 5][c + 6] = ' ';  x[r + 5][c + 7] = '(';  x[r + 5][c + 8] = ' ';  x[r + 5][c + 9] = ')';  x[r + 5][c + 10] = ' ';  x[r + 5][c + 11] = ')';

    // Line 6
    x[r + 6][c + 0] = '(';  x[r + 6][c + 1] = ' ';  x[r + 6][c + 2] = ' ';  x[r + 6][c + 3] = '(';  x[r + 6][c + 4] = ' ';  x[r + 6][c + 5] = ')';  x[r + 6][c + 6] = ' ';  x[r + 6][c + 7] = ' ';  x[r + 6][c + 8] = ' ';  x[r + 6][c + 9] = '(';  x[r + 6][c + 10] = ' ';  x[r + 6][c + 11] = ')';  x[r + 6][c + 12] = ' ';  x[r + 6][c + 13] = '_';  x[r + 6][c + 14] = ')';
}
void drawenemyfox(char x[][500], int ROWS, int COLS) {
    // Row 0
    x[0][0] = '|'; x[0][1] = '\\'; x[0][2] = '_'; x[0][3] = '/'; x[0][4] = '|';
    x[0][5] = ','; x[0][6] = ','; x[0][7] = ' '; x[0][8] = ' '; x[0][9] = '_';
    x[0][10] = '_'; x[0][11] = ','; x[0][12] = ' '; x[0][13] = ' '; x[0][14] = '`';

    // Row 1
    x[1][0] = '('; x[1][1] = '.'; x[1][2] = '"'; x[1][3] = '.'; x[1][4] = ')';
    x[1][5] = ' '; x[1][6] = ' '; x[1][7] = ' '; x[1][8] = ' '; x[1][9] = ' ';
    x[1][10] = ' '; x[1][11] = ' '; x[1][12] = ')'; x[1][13] = '`'; x[1][14] = '~';
    x[1][15] = '}'; x[1][16] = '}';

    // Row 2
    x[2][0] = ' '; x[2][1] = '\\'; x[2][2] = 'o'; x[2][3] = '/'; x[2][4] = '\\';
    x[2][5] = ' '; x[2][6] = '/'; x[2][7] = '-'; x[2][8] = '-'; x[2][9] = '-';
    x[2][10] = ' '; x[2][11] = '\\'; x[2][12] = '\\'; x[2][13] = ' '; x[2][14] = ' ';
    x[2][15] = '}'; x[2][16] = '}';

    // Row 3
    x[3][0] = ' '; x[3][1] = ' '; x[3][2] = '_'; x[3][3] = '/'; x[3][4] = '/';
    x[3][5] = ' '; x[3][6] = ' '; x[3][7] = ' '; x[3][8] = ' '; x[3][9] = '_';
    x[3][10] = '/'; x[3][11] = '/'; x[3][12] = ' '; x[3][13] = '~'; x[3][14] = '}';
}
void drawheroleft(char x[][500], int r, int c) {
    x[r + 0][c + 8] = '/';  x[r + 0][c + 7] = '\\'; x[r + 0][c + 6] = ' ';  x[r + 0][c + 5] = ' ';  x[r + 0][c + 4] = ' ';  x[r + 0][c + 3] = ' ';  x[r + 0][c + 2] = '_';  x[r + 0][c + 1] = '/';  x[r + 0][c + 0] = '\\';
    x[r + 1][c + 8] = '/';  x[r + 1][c + 7] = ' ';  x[r + 1][c + 6] = 'o';  x[r + 1][c + 5] = ' ';  x[r + 1][c + 4] = ' ';  x[r + 1][c + 3] = 'o';  x[r + 1][c + 2] = ' ';  x[r + 1][c + 1] = ' ';  x[r + 1][c + 0] = '\\';
    x[r + 2][c + 10] = '('; x[r + 2][c + 9] = ' ';  x[r + 2][c + 8] = '=';  x[r + 2][c + 7] = '=';  x[r + 2][c + 6] = ' ';  x[r + 2][c + 5] = '^';  x[r + 2][c + 4] = ' ';  x[r + 2][c + 3] = '=';  x[r + 2][c + 2] = '=';  x[r + 2][c + 1] = ' ';  x[r + 2][c + 0] = ')';
    x[r + 3][c + 9] = ')';  x[r + 3][c + 8] = ' ';  x[r + 3][c + 7] = ' ';  x[r + 3][c + 6] = ' ';  x[r + 3][c + 5] = ' ';  x[r + 3][c + 4] = ' ';  x[r + 3][c + 3] = ' ';  x[r + 3][c + 2] = ' ';  x[r + 3][c + 1] = ' ';  x[r + 3][c + 0] = '(';
    x[r + 4][c + 9] = ')';  x[r + 4][c + 8] = ' ';  x[r + 4][c + 7] = ' ';  x[r + 4][c + 6] = ' ';  x[r + 4][c + 5] = ' ';  x[r + 4][c + 4] = ' ';  x[r + 4][c + 3] = ' ';  x[r + 4][c + 2] = ' ';  x[r + 4][c + 1] = ' ';  x[r + 4][c + 0] = '(';
    x[r + 5][c + 11] = ')'; x[r + 5][c + 10] = ' '; x[r + 5][c + 9] = ')';  x[r + 5][c + 8] = ' ';  x[r + 5][c + 7] = '(';  x[r + 5][c + 6] = ' ';  x[r + 5][c + 5] = ' ';  x[r + 5][c + 4] = ')';  x[r + 5][c + 3] = ' ';  x[r + 5][c + 2] = '(';  x[r + 5][c + 1] = ' ';  x[r + 5][c + 0] = '(';
    x[r + 6][c + 14] = ')'; x[r + 6][c + 13] = ' '; x[r + 6][c + 12] = ' '; x[r + 6][c + 11] = ')'; x[r + 6][c + 10] = ' '; x[r + 6][c + 9] = '(';  x[r + 6][c + 8] = ' ';  x[r + 6][c + 7] = ' ';  x[r + 6][c + 6] = ' ';  x[r + 6][c + 5] = ')';  x[r + 6][c + 4] = ' ';  x[r + 6][c + 3] = '(';  x[r + 6][c + 2] = ' ';  x[r + 6][c + 1] = '_';  x[r + 6][c + 0] = '(';
}
void drawcatFriend(char x[][500], int row, int col) {
    // Line 0:  /\/\
    x[row + 0][col + 0] = ' ';
    x[row + 0][col + 1] = '/';
    x[row + 0][col + 2] = '\\';
    x[row + 0][col + 3] = '*';
    x[row + 0][col + 4] = '*';
    x[row + 0][col + 5] = '/';
    x[row + 0][col + 6] = '\\';

    // Line 1: ( o_o  )_)
    x[row + 1][col + 0] = '(';
    x[row + 1][col + 1] = ' ';
    x[row + 1][col + 2] = 'o';
    x[row + 1][col + 3] = '_';
    x[row + 1][col + 4] = 'o';
    x[row + 1][col + 5] = ' ';
    x[row + 1][col + 6] = ' ';
    x[row + 1][col + 7] = ')';
    x[row + 1][col + 8] = '_';
    x[row + 1][col + 9] = ')';

    // Line 2: ,(u  u  ,),
    x[row + 2][col + 0] = ',';
    x[row + 2][col + 1] = '(';
    x[row + 2][col + 2] = 'u';
    x[row + 2][col + 3] = ' ';
    x[row + 2][col + 4] = ' ';
    x[row + 2][col + 5] = 'u';
    x[row + 2][col + 6] = ' ';
    x[row + 2][col + 7] = ',';
    x[row + 2][col + 8] = ')';
    x[row + 2][col + 9] = ',';
}
int checkHeroTouchesCatFriend(int rhero, int chero, int RcatF, int CcatF) {
    int heroWidth = 14; 
    int heroHeight = 7;  

    int catWidth = 10; 
    int catHeight = 3; 

    if (rhero < RcatF + catHeight &&
        rhero + heroHeight > RcatF &&
        chero < CcatF + catWidth &&
        chero + heroWidth > CcatF) {
        return 1;
    }

    return 0;
}
void drawMiceright(char x[][500], int Rmice, int Cmice) {

    // Line 0: " __QQ"
    int c = Cmice;
    x[Rmice + 0][c + 1] = '_';
    x[Rmice + 0][c + 2] = '_';
    x[Rmice + 0][c + 3] = 'Q';
    x[Rmice + 0][c + 4] = 'Q';

    c = Cmice;
    // Line 1: " ()\">"
    x[Rmice + 1][c + 1] = '(';
    x[Rmice + 1][c + 2] = '_';
    x[Rmice + 1][c + 3] = ')';
    x[Rmice + 1][c + 4] = '_';
    x[Rmice + 1][c + 5] = '\"';
    x[Rmice + 1][c + 6] = '>';

}
void drawMiceleft(char x[][500], int startRow, int startCol) {
    // Row 1: "     QQ__"
    x[startRow][startCol + 5] = 'Q';
    x[startRow][startCol + 6] = 'Q';
    x[startRow][startCol + 7] = '_';
    x[startRow][startCol + 8] = '_';

    // Row 2: "   <\"()"
    x[startRow + 1][startCol + 3] = '<';
    x[startRow + 1][startCol + 4] = '"';
    x[startRow + 1][startCol + 5] = '_';
    x[startRow + 1][startCol + 6] = '(';
    x[startRow + 1][startCol + 7] = '_';
    x[startRow + 1][startCol + 8] = ')';
}
void drawGun(char x[][500], int& FlagTakeGun, int rh, int ch)
{
    x[36][79] = 'G';
    x[36][80] = 'U';
    x[36][81] = 'N';

    if (rh + 2 == 36 && ch + 1 == 79)
    {
        FlagTakeGun = 1;
    }
}
void disp(char x[][500], int& s, int& e)
{

    for (int r = 0; r < 38; r++) {

        for (int c = s; c < e; c++)
        {
            cout << x[r][c];
        }
        cout << endl;
    }
}
void movehero(char x[][500], int& r, int& c, char p, int& flag, int& flag1, int& FacingDirection, int& s, int& e)
{
    int windowWidth = e - s;
    int centerPoint = s + (windowWidth / 2);

    if (p == 'w')
    {
        r--;
    }
    if (p == 's')
    {
        if (x[r + 7][c] != '_' && x[r + 7][c] != '#')
        {
            r++;
        }
    }
    if (p == 'd')
    {
        c += 3;
        if (c > centerPoint && e < 499)
        {
            s += 3;
            e += 3;
        }
        FacingDirection = FacingRight;
    }
    if (p == 'a')
    {
        c -= 3;
        if (c < centerPoint && s > 0)
        {
            s -= 3;
            e -= 3;
        }
        FacingDirection = FacingLeft;
    }
    if (p == 'e')
    {
        r -= 4;
        c += 6;

        if (c > centerPoint && e < 499)
        {
            s += 6;
            e += 6;
        }
    }
    if (p == 'q')
    {
        r -= 4;
        c -= 6;

        if (c < centerPoint && s > 0)
        {
            s -= 6;
            e -= 6;
        }
    }


    if (s < 0) {
        s = 0;
        e = windowWidth;
    }
    if (e > 500) {
        e = 500;
        s = 500 - windowWidth;
    }

    if (p == 'b')
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    if (p == 'l')
    {
        flag1 = 1;
    }
}
void clearscreen()
{
    system("cls");
}
void gravity(char x[][500], int& rhero, int chero) {
    int standCheck = 0;

    for (int i = 0; i < 10; i++) {
        if (chero + i < 500 && x[rhero + 7][chero + i] != ' ') {
            standCheck++;
            break;
        }
    }
    if (standCheck == 0) {
        rhero++;
    }
}
void fire_bullet(char x[][500], int r, int c, int FacingDirection, int bulletRows[], int bulletCols[], int bulletDirections[], int& bulletCount)
{
    int MAX_BULLETS = 100;

    if (bulletCount < MAX_BULLETS)
    {
        bulletRows[bulletCount] = r + 4;

        if (FacingDirection == FacingRight)
        {
            bulletCols[bulletCount] = c + 10;
            bulletDirections[bulletCount] = 1;
        }
        else
        {
            bulletCols[bulletCount] = c - 1;
            bulletDirections[bulletCount] = -1;
        }

        bulletCount++;
    }
}
void fire_laser(char x[][500], int r, int c, int FacingDirection, int laserRows[], int laserCols[], int laserDirections[], int& laserCount)
{
    int MAX_LASERS = 100;

    if (laserCount < MAX_LASERS)
    {
        laserRows[laserCount] = r + 4;
        laserCols[laserCount] = c;

        if (FacingDirection == FacingRight)
        {
            laserDirections[laserCount] = 1;
        }
        else
        {
            laserDirections[laserCount] = -1;
        }

        laserCount++;
    }
}
void update_projectiles(char x[][500], int bulletRows[], int bulletCols[], int bulletDirections[], int& bulletCount,
    int laserRows[], int laserCols[], int laserDirections[], int& laserCount, int s, int e)
{
    for (int i = 0; i < bulletCount; i++)
    {
        bulletCols[i] += bulletDirections[i];

        if (bulletCols[i] < 0 || bulletCols[i] >= 500)
        {
            for (int j = i; j < bulletCount - 1; j++)
            {
                bulletRows[j] = bulletRows[j + 1];
                bulletCols[j] = bulletCols[j + 1];
                bulletDirections[j] = bulletDirections[j + 1];
            }
            bulletCount--;
            i--;
        }
        else
        {
            if (bulletDirections[i] == 1)
            {
                x[bulletRows[i]][bulletCols[i]] = '>';
            }
            else
            {
                x[bulletRows[i]][bulletCols[i]] = '<';
            }
        }
    }

    for (int i = 0; i < laserCount; i++)
    {
        if (laserDirections[i] == 1)
        {
            for (int col = laserCols[i]; col < min(e, 500); col++)
            {
                x[laserRows[i]][col] = '=';
            }
        }
        else
        {
            for (int col = laserCols[i]; col > max(s, 0); col--)
            {
                x[laserRows[i]][col] = '=';
            }
        }

        for (int j = i; j < laserCount - 1; j++)
        {
            laserRows[j] = laserRows[j + 1];
            laserCols[j] = laserCols[j + 1];
            laserDirections[j] = laserDirections[j + 1];
        }
        laserCount--;
        i--;
    }
}

int checkDogHit(int Rdog, int Cdog, int& dogAlive, int bulletRows[], int bulletCols[],
    int bulletDirections[], int& bulletCount,
    int laserRows[], int laserCols[], int laserDirections[], int laserCount) {

    if (dogAlive == 0) {
        return 0;
    }

    int dogWidth = 17;
    int dogHeight = 8;

    for (int i = 0; i < bulletCount; i++) {
        if (bulletRows[i] >= Rdog && bulletRows[i] < Rdog + dogHeight &&
            bulletCols[i] >= Cdog && bulletCols[i] < Cdog + dogWidth) {

            for (int j = i; j < bulletCount - 1; j++) {
                bulletRows[j] = bulletRows[j + 1];
                bulletCols[j] = bulletCols[j + 1];
                bulletDirections[j] = bulletDirections[j + 1];
            }
            bulletCount--;

            dogAlive = 0;
            return 1;
        }
    }

    for (int i = 0; i < laserCount; i++) {

        if (laserRows[i] >= Rdog && laserRows[i] < Rdog + dogHeight) {


            if (laserDirections[i] == 1 && Cdog <= laserCols[i] + 500) {
                dogAlive = 0;
                return 1;
            }


            if (laserDirections[i] == -1 && Cdog + dogWidth >= laserCols[i] - 500) {
                dogAlive = 0;
                return 1;
            }
        }
    }

    return 0;
}


void dogFireBullet(int Rdog, int Cdog, int dirdog, int rhero, int chero,
    int enemyBulletRows[], int enemyBulletCols[],
    int enemyBulletDirections[], int& enemyBulletCount) {

    int MAX_ENEMY_BULLETS = 50;

    if (enemyBulletCount >= MAX_ENEMY_BULLETS) {
        return;
    }

    if (dirdog == 1) {
        enemyBulletRows[enemyBulletCount] = Rdog + 4;
        enemyBulletCols[enemyBulletCount] = Cdog + 9;
        enemyBulletDirections[enemyBulletCount] = 1;
    }
    else {
        enemyBulletRows[enemyBulletCount] = Rdog + 4;
        enemyBulletCols[enemyBulletCount] = Cdog + 2;
        enemyBulletDirections[enemyBulletCount] = -1;
    }
    enemyBulletCount++;
}



int main()
{
    char x[200][500];
    int rhero = 20;
    int chero = 30;
    int flagBullet = 0;
    int flagLazer = 1;
    int FacingDirection = FacingRight;

    int bulletRows[100];
    int bulletCols[100];
    int bulletDirections[100];
    int bulletCount = 0;
    int gameWon = 0;
    int enemyBulletRows[50];
    int enemyBulletCols[50];
    int enemyBulletDirections[50];
    int enemyBulletCount = 0;
    int heroLives = 3;

    int s = 0;
    int e = 120;
    int ROWS = 22;
    int COLS = 33;
    int rfloor = 17;
    int cfloor = 150;
    int Rcloud = 2;
    int Ccloud = 5;
    int Rcloud2 = 6;
    int Ccloud2 = 55;
    int Rcloud3 = 2;
    int Ccloud3 = 80;

    int homeCol = 80;
    int Rmice = 34;
    int Cmice = 80;
    int dirMouse = 1;
    int maxDistance = 10;
    int dirdog = 1;
    int homeCol2 = 70;


    int laserRows[100];
    int laserCols[100];
    int laserDirections[100];
    int laserCount = 0;
    int re = 17;
    int ce = 40;
    int dirElev = 1;
    int flagElvatorHero = 0;
    int Rcutcus = 28;
    int Ccutcus = 4;
    int Rowl = 25;
    int Cowl = 4;
    int Rdog = 9;
    int Cdog = 60;
    int Rl = 7;
    int Cl = 60;
    int dogAlive = 1;
    int dogFireCooldown = 20;
    int RcatF = 5;
    int CcatF = 23;

    for (;;)
    {
        clearscreen();
        drawbackground(x);
        drawFancyFloor(x, 36, 1);
        drawSpikedGround(x, rfloor, cfloor);
        drawCactus(x, Rcutcus, Ccutcus);
        drawOwl(x, Rowl, Cowl);
        drawSpikedGround2(x, 8, 40);
        drawladder(x, 35, 130);
        drawcatFriend(x, RcatF, CcatF);
        moveClouds(Ccloud, Ccloud2, Ccloud3);
        drawCloud(x, Rcloud, Ccloud);
        drawCloud(x, Rcloud2, Ccloud2);
        drawCloud(x, Rcloud3, Ccloud3);
        if (checkHeroTouchesCatFriend(rhero, chero, RcatF, CcatF)) {
            gameWon = 1;
        }
        Elvator(x, re, ce);
        moveelvator(x, re, ce, dirElev, rhero, chero, flagElvatorHero);

        if (!flagElvatorHero) {
            gravity(x, rhero, chero);
        }

        if (dirMouse == 1) {
            drawMiceright(x, Rmice, Cmice);
            Cmice++;
            if (Cmice >= homeCol + maxDistance) {
                dirMouse = -1;
            }
        }
        else {
            drawMiceleft(x, Rmice, Cmice);
            Cmice--;
            if (Cmice <= homeCol - maxDistance) {
                dirMouse = 1;
            }
        }

        if (Cmice > homeCol + maxDistance + 5) {
            Cmice = homeCol;
        }
        if (Cmice < homeCol - maxDistance - 5) {
            Cmice = homeCol;
        }


        if (dogAlive == 1) {

            if (dirdog == 1) {
                drawDogRight(x, Rdog, Cdog);
                Cdog++;
                if (Cdog >= homeCol2 + maxDistance) {
                    dirdog = -1;
                }
            }
            else {
                drawDogleft(x, Rdog, Cdog);
                Cdog--;
                if (Cdog <= homeCol2 - maxDistance) {
                    dirdog = 1;
                }
            }

            if (Cdog > homeCol2 + maxDistance + 5) {
                Cdog = homeCol2;
            }
            if (Cdog < homeCol2 - maxDistance - 5) {
                Cdog = homeCol2;
            }

            dogFireCooldown--;
            if (dogFireCooldown <= 0) {
                dogFireBullet(Rdog, Cdog, dirdog, rhero, chero,
                    enemyBulletRows, enemyBulletCols,
                    enemyBulletDirections, enemyBulletCount);
                dogFireCooldown = 30;
            }
        }

        if (FacingDirection == FacingRight)
            drawheroright(x, rhero, chero);
        else
            drawheroleft(x, rhero, chero);

        update_projectiles(x, bulletRows, bulletCols, bulletDirections, bulletCount,
            laserRows, laserCols, laserDirections, laserCount, s, e);

        update_enemy_bullets(x, enemyBulletRows, enemyBulletCols, enemyBulletDirections, enemyBulletCount);
        checkHeroHit(rhero, chero, enemyBulletRows, enemyBulletCols, enemyBulletDirections, enemyBulletCount, heroLives);

        checkDogHit(Rdog, Cdog, dogAlive, bulletRows, bulletCols, bulletDirections, bulletCount,
            laserRows, laserCols, laserDirections, laserCount);

        drawLives(x, heroLives);

      

        if (heroLives <= 0) {
            for (int i = 0; i < 38; i++) {
                for (int j = s; j < e; j++) {
                    x[i][j] = ' ';
                }
            }

            char message[] = { 'G', 'A', 'M', 'E', ' ', 'O', 'V', 'E', 'R', '\0' };
            for (int i = 0; message[i] != '\0'; i++) {
                x[19][s + 55 + i] = message[i];
            }
        }

        if (gameWon) {
            for (int i = 0; i < 38; i++) {
                for (int j = s; j < e; j++) {
                    x[i][j] = ' ';
                }
            }

            char message[] = { 'Y', 'O', 'U', ' ', 'W', 'I', 'N', '\0' };
            for (int i = 0; message[i] != '\0'; i++) {
                x[19][s + 55 + i] = message[i];
            }
        }

        disp(x, s, e);

        
        if (heroLives <= 0 || gameWon) {
            break;
        }

        if (_kbhit())
        {
            char p = _getch();
            if (p == 'b')
            {
                fire_bullet(x, rhero, chero, FacingDirection, bulletRows, bulletCols, bulletDirections, bulletCount);
            }
            else if (p == 'l')
            {
                fire_laser(x, rhero, chero, FacingDirection, laserRows, laserCols, laserDirections, laserCount);
            }
            else
            {
                movehero(x, rhero, chero, p, flagBullet, flagLazer, FacingDirection, s, e);
            }

        }
    }

    return 0;
}