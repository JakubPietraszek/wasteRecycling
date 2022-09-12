#include "PaperGarbage.h"

void PaperGarbage::squeeze()
{
    isSqueezed = true;
}

bool PaperGarbage::isSqueezedGetter()
{
    return isSqueezed;
}
