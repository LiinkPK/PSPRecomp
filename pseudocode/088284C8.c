/* Entry 0x088284C8 | file offset 0x000254A0 | FUN_088284c8 | bytes 368 */

void FUN_088284c8(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  fVar1 = DAT_089d5eac;
  iVar4 = 0;
  piVar5 = &DAT_09afb850;
  do {
    if (*piVar5 != 0) {
      iVar3 = FUN_088a751c();
      if (iVar3 == 0) {
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      else {
        piVar5[1] = (int)((float)piVar5[1] + fVar1);
      }
    }
    fVar2 = DAT_089d5eac;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
  } while (iVar4 < 4);
  iVar4 = 0;
  piVar5 = &DAT_09afb870;
  do {
    if (*piVar5 != 0) {
      iVar3 = FUN_088a751c();
      if (iVar3 == 0) {
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      else {
        piVar5[1] = (int)((float)piVar5[1] + fVar2);
      }
    }
    fVar1 = DAT_089d5eac;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
  } while (iVar4 < 2);
  iVar4 = 0;
  piVar5 = &DAT_09afb880;
  do {
    if (*piVar5 != 0) {
      iVar3 = FUN_088a751c();
      if (iVar3 == 0) {
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      else {
        piVar5[1] = (int)((float)piVar5[1] + fVar1);
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
  } while (iVar4 < 2);
  return;
}

