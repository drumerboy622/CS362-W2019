/*      Adventurer Card Test        */

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>

int main(){

       struct gameState state;
       int k[10]={adventurer, gardens, embargo, village, minion, mine, cutpurse, sea_hag, tribute, smithy};

        printf("------------------  Testing Card: Adventurer Card ----------------\n");

        initializeGame(MAX_PLAYERS, k, 5, &state);
        int coin_bonus=0;

        // Check to see if the card draws 3
        
        cardEffect(7, -1, -1, -1, &state, 0, &coin_bonus);
 
	return(0);       
}
