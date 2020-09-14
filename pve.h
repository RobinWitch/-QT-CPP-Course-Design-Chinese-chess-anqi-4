#ifndef PVE_H
#define PVE_H

#include"Board.h"

class pve:public Board
{
  public:
    int rank[32]={0};
    pve();
    void mouseReleaseEvent();

};

#endif // PVE_H
