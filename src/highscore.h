#ifndef HIGHSCORE_H
#define HIGHSCORE_H

void highscore_reset(void);
long highscore_load(struct gamestate *g);
void highscore_save(struct gamestate *g);

#endif
