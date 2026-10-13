/* Entry 0x088B4268 | file offset 0x000B1240 | FUN_088b4268 | bytes 288 */

int FUN_088b4268(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,
                int param_7,int param_8,uint *puStackX_0)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *puStackX_0;
  uVar3 = puStackX_0[1];
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = -1;
  if (0 < param_5) {
    do {
      iVar7 = *param_4;
      if ((1 << ((int)*(char *)(iVar7 + 0x16) & 0x1fU) & uVar3) == 0) {
        bVar1 = false;
      }
      else if (*(short *)(iVar7 + 6) == -1) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
        if (((uint)*(ushort *)(iVar7 + 0x1e) & 1 << (uVar2 & 0x1f)) != 0) {
          bVar1 = true;
        }
      }
      if (((bVar1) && (*(char *)((int)param_4 + 7) == '\0')) &&
         (param_6 + (short)param_4[1] <= param_7)) {
        iVar7 = (int)*(char *)((int)param_4 + 6);
        if ((iVar5 <= iVar7) && (iVar7 <= param_8)) {
          if (iVar5 < iVar7) {
            iVar6 = 0;
            iVar5 = iVar7;
          }
          if (iVar6 < param_3) {
            *(int *)(param_2 + iVar6 * 4) = iVar4;
            iVar6 = iVar6 + 1;
          }
        }
      }
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 2;
    } while (iVar4 < param_5);
  }
  return iVar6;
}

