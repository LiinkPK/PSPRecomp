/* Entry 0x088A2324 | file offset 0x0009F2FC | FUN_088a2324 | bytes 432 */

void FUN_088a2324(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = DAT_089d5eac;
  iVar5 = DAT_09b4cf98;
  while (iVar1 = iVar5, iVar1 != 0) {
    iVar5 = DAT_09b4cf98;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x58);
    }
    if (DAT_089d6ca0 != DAT_089d6ca1) {
      FUN_088a33d0(iVar1,DAT_089d6c9c,DAT_089d6ca0);
    }
    FUN_088a2b6c(uVar2,iVar1);
    iVar4 = DAT_09b4cf98;
    if ((*(uint *)(iVar1 + 0x34) & 2) != 0) {
      if ((DAT_09b4cf98 != 0) && (DAT_09b4cf9c != 0)) {
        iVar6 = *(int *)(iVar1 + 0x58);
        if (iVar1 == DAT_09b4cf98) {
          iVar4 = 0;
          DAT_09b4cf98 = iVar6;
        }
        else {
          iVar3 = *(int *)(DAT_09b4cf98 + 0x58);
          if (*(int *)(DAT_09b4cf98 + 0x58) == iVar1) {
            *(int *)(DAT_09b4cf98 + 0x58) = iVar6;
          }
          else {
            do {
              iVar4 = iVar3;
              iVar3 = *(int *)(iVar4 + 0x58);
            } while (*(int *)(iVar4 + 0x58) != iVar1);
            *(int *)(iVar4 + 0x58) = iVar6;
          }
        }
        if (iVar1 == DAT_09b4cf9c) {
          DAT_09b4cf9c = iVar4;
        }
        *(undefined4 *)(iVar1 + 0x58) = 0;
      }
      FUN_088a1dcc(iVar1,3);
    }
  }
  fVar8 = *(float *)(DAT_089d69e0 + 0x18);
  iVar5 = 0;
  piVar7 = &DAT_09b4cfa0;
  do {
    if ((*piVar7 != -1) && (fVar9 = (float)piVar7[1] - fVar8, piVar7[1] = (int)fVar9, fVar9 <= 0.0))
    {
      *piVar7 = -1;
    }
    iVar5 = iVar5 + 1;
    piVar7 = piVar7 + 3;
  } while (iVar5 < 0x40);
  DAT_089d6ca1 = DAT_089d6ca0;
  return;
}

