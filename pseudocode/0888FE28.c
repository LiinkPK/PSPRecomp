/* Entry 0x0888FE28 | file offset 0x0008CE00 | FUN_0888fe28 | bytes 648 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0888fe28(float param_1,int param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  float fVar12;
  undefined1 local_40;
  
  iVar7 = _DAT_08af2bd4;
  local_40 = 0;
  bVar4 = false;
  iVar10 = 0;
  piVar9 = (int *)(param_2 + 4);
  psVar11 = (short *)(_DAT_08af2bd4 + 0xc);
  do {
    iVar6 = piVar9[4];
    if (iVar6 < 1) {
      if (-1 < iVar6) {
        iVar6 = *piVar9;
        iVar8 = *(int *)(iVar6 + 0x1108);
        bVar3 = false;
        if (iVar8 != 0) {
          iVar5 = FUN_08837990(iVar8);
          iVar6 = *piVar9;
          if ((iVar5 == 0) && ((*(byte *)(iVar8 + 0x5b7) & 0x20) == 0)) {
            bVar3 = true;
          }
        }
        iVar6 = FUN_088377c0(iVar6);
        if (((((iVar6 == 1) || (iVar6 = *piVar9, (*(uint *)(iVar6 + 0x388) & 0x2000000) != 0)) ||
             ((*(uint *)(iVar6 + 0x184) & 0x10) != 0)) ||
            (((*(uint *)(*(int *)(iVar6 + 0x3a4) + 4) & 8) != 0 ||
             (iVar6 = FUN_08838074(), iVar6 == 1)))) || (bVar3)) {
          piVar9[2] = 0;
        }
        else {
          fVar12 = (float)piVar9[2];
          piVar9[2] = (int)(fVar12 + param_1);
          if (((float)piVar9[3] <= fVar12 + param_1) && (iVar6 = FUN_088377d0(*piVar9), iVar6 == 0))
          {
            piVar9[2] = 0;
            piVar9[4] = 1;
            *(undefined1 *)(piVar9 + 5) = 1;
            local_40 = 1;
          }
        }
      }
    }
    else if (iVar6 < 2) {
      *(undefined1 *)(piVar9 + 5) = 0;
      bVar4 = true;
      if ((*(uint *)(*piVar9 + 0x188) & 0x10) == 0) {
        if (piVar9[1] == 0) {
          piVar9[2] = 0;
        }
        else {
          FUN_088a6aa4();
          piVar9[1] = 0;
          piVar9[2] = 0;
        }
        sVar1 = *(short *)(iVar7 + 0xe);
        sVar2 = *psVar11;
        piVar9[4] = 0;
        piVar9[3] = (int)(float)(((int)sVar1 + (int)sVar2) * 0x3c);
      }
    }
    iVar10 = iVar10 + 1;
    piVar9 = piVar9 + 6;
  } while (iVar10 < 2);
  if (bVar4) {
    iVar7 = 0;
    do {
      *(undefined4 *)(param_2 + 0xc) = 0;
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 0x18;
    } while (iVar7 < 2);
  }
  return local_40;
}

