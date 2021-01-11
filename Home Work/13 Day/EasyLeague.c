/*
--------------------------------------------------
Name    : Easy League
Author  : Danial Khorasanizadeh
Course  : Foundations of programming (Fall 99)
Date    : 29/Dec/2020
--------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct player
{
    char name[100];
    int id;
    int price;
    int speed;
    int finishing;
    int defence;
    int team;
};
struct team
{
    char name[100];
    int id;
    int money;
    int *players;
    int playersCount;
    int win;
    int loss;
    int draw;
};
void newTeam(struct team *team, int *id, char name[100], int money)
{
    team->id = *id;
    strcpy(team->name, name);
    team->money = money;
    team->playersCount = 0;
    team->players = NULL;
    team->win = 0;
    team->loss = 0;
    team->draw = 0;
    *id += 1;
}
void newPlayer(struct player *player, int *id)
{
    char name[100];
    int price, speed, finishing, defence;
    scanf("%s %d %d %d %d", name, &price, &speed, &finishing, &defence);
    player->id = *id;
    strcpy(player->name, name);
    player->price = price;
    player->speed = speed;
    player->finishing = finishing;
    player->defence = defence;
    player->team = -1;
    *id += 1;
}
void removePlayer(int *players, int *playersCount, int playerToRemove)
{
    *playersCount -= 1;
    int i;
    for (i = playerToRemove; i < *playersCount; i++)
    {
        players[i] = players[i + 1];
    }
    players = (int *)realloc(players, *playersCount * sizeof(int));
}
int rankCompare(const void *p1, const void *p2)
{
    const struct team *team1 = p1;
    const struct team *team2 = p2;
    if (team1->win > team2->win)
    {
        return -1;
    }
    else if (team1->win < team2->win)
    {
        return 1;
    }
    else if (team1->win == team2->win)
    {
        if (team1->loss < team2->loss)
        {
            return -1;
        }
        else if (team1->loss > team2->loss)
        {
            return 1;
        }
        else if (team1->loss == team2->loss)
        {
            if (team1->id < team2->id)
            {
                return -1;
            }
            else if (team1->id > team2->id)
            {
                return 1;
            }
        }
    }
}
int main(void)
{
    int playerId = 1, teamId = 1;
    struct player *players = NULL;
    struct team *teams = NULL;
    char command[10];
    do
    {
        scanf("%s", command);
        if (strcmp(command, "new") == 0)
        {
            scanf("%s", command);
            if (strcmp(command, "player") == 0)
            {
                players = (struct player *)realloc(players, playerId * sizeof(struct player));
                newPlayer(&players[playerId - 1], &playerId);
            }
            else if (strcmp(command, "team") == 0)
            {
                char name[100];
                int money;
                bool teamExists = false;
                scanf("%s %d", name, &money);
                for (int i = 0; i < teamId - 1; i++)
                {
                    if (strcmp(teams[i].name, name) == 0)
                    {
                        teamExists = true;
                    }
                }
                if (!teamExists)
                {
                    teams = (struct team *)realloc(teams, teamId * sizeof(struct team));
                    newTeam(&teams[teamId - 1], &teamId, name, money);
                }
            }
        }
        else if (strcmp(command, "buy") == 0)
        {
            int buyPlayerId, buyTeamId;
            scanf("%d %d", &buyPlayerId, &buyTeamId);
            if (buyPlayerId > playerId - 1)
            {
                printf("player with the id %d doesnt exist\n", buyPlayerId);
            }
            else if (buyTeamId > teamId - 1)
            {
                printf("team with the id %d doesnt exist\n", buyTeamId);
            }
            else if (teams[buyTeamId - 1].money < players[buyPlayerId - 1].price)
            {
                printf("the team cant afford to buy this player\n");
            }
            else if (players[buyPlayerId - 1].team != -1)
            {
                printf("player already has a team\n");
            }
            else
            {
                players[buyPlayerId - 1].team = buyTeamId;
                teams[buyTeamId - 1].players = (int *)realloc(teams[buyTeamId - 1].players, (teams[buyTeamId - 1].playersCount + 1) * sizeof(int));
                teams[buyTeamId - 1].players[teams[buyTeamId - 1].playersCount++] = buyPlayerId;
                teams[buyTeamId - 1].money -= players[buyPlayerId - 1].price;
                printf("player added to the team succesfully\n");
            }
        }
        else if (strcmp(command, "sell") == 0)
        {
            int sellPlayerId, sellTeamId;
            scanf("%d %d", &sellPlayerId, &sellTeamId);
            if (sellTeamId > teamId - 1)
            {
                printf("team doesnt exist\n");
            }
            bool playerExists = false;
            for (int i = 0; i < teams[sellTeamId - 1].playersCount; i++)
            {
                if (teams[sellTeamId - 1].players[i] == sellPlayerId)
                {
                    playerExists = true;
                    removePlayer(teams[sellTeamId - 1].players, &teams[sellTeamId - 1].playersCount, i);
                    teams[sellTeamId - 1].money += players[sellPlayerId - 1].price;
                    players[sellPlayerId - 1].team = -1;
                    printf("player sold succesfully\n");
                    break;
                }
            }
            if (!playerExists)
            {
                printf("team doesnt have this player\n");
            }
        }
        else if (strcmp(command, "match") == 0)
        {
            int matchTeam1Id, matchTeam2Id;
            scanf("%d %d", &matchTeam1Id, &matchTeam2Id);
            if (matchTeam1Id > teamId - 1 || matchTeam2Id > teamId - 1)
            {
                printf("team doesnt exist\n");
            }
            else if (teams[matchTeam1Id - 1].playersCount < 11 || teams[matchTeam2Id - 1].playersCount < 11)
            {
                printf("the game can not be held due to loss of the players\n");
            }
            else
            {
                int power1 = 0, power2 = 0;
                for (int i = 0; i < 11; i++)
                {
                    power1 += players[teams[matchTeam1Id - 1].players[i] - 1].speed;
                    power1 += players[teams[matchTeam1Id - 1].players[i] - 1].finishing;
                    power2 += players[teams[matchTeam2Id - 1].players[i] - 1].speed;
                    power2 += players[teams[matchTeam2Id - 1].players[i] - 1].defence;
                }
                if (power1 > power2)
                {
                    teams[matchTeam1Id - 1].win++;
                    teams[matchTeam1Id - 1].money += 1000;
                    teams[matchTeam2Id - 1].loss++;
                }
                else if (power1 < power2)
                {
                    teams[matchTeam2Id - 1].win++;
                    teams[matchTeam2Id - 1].money += 1000;
                    teams[matchTeam1Id - 1].loss++;
                }
                else if (power1 == power2)
                {
                    teams[matchTeam1Id - 1].draw++;
                    teams[matchTeam2Id - 1].draw++;
                }
            }
        }
        else if (strcmp(command, "rank") == 0)
        {
            qsort(teams, teamId - 1, sizeof(struct team), rankCompare);
            for (int i = 0; i < teamId - 1; i++)
            {
                printf("%d. %s\n", i + 1, teams[i].name);
            }
        }
    } while (strcmp(command, "end"));
    free(teams);
    free(players);
    return 0;
}