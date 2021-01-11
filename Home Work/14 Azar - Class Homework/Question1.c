/*
--------------------------------------------------
Name        : Bazgasht az boostan
Author      : Danial Khorasanizadeh
Course      : Foundations of Programming (Fall 99)
Description : Ba estefade az taghir mokhtasat mabdaa
mokhtasat hadaf ra dar yeki az manategh dastgah mokhtasat
gharar dade va ba tavajoh be inke hala Rodzyanko Dobromil Vyacheslavovich
dar (0,0) ast agar hadaf dar manategh 1,4 bashad bayad be rast
va agar dar manategh 2,3 bashad bayad be chap becharkhad.
--------------------------------------------------
*/
#include <stdio.h>
int main(void)
{
    int RussianGuyX, RussianGuyY, TargetX, TargetY;
    scanf("%d%d %d%d", &RussianGuyX, &RussianGuyY, &TargetX, &TargetY);
    TargetX -= RussianGuyX;
    TargetY -= RussianGuyY;
    if (TargetX == 0)
    {
        puts("Error!");
    }
    else if (TargetX > 0)
    {
        puts("Right");
    }
    else if (TargetX < 0)
    {
        puts("Left");
    }
}