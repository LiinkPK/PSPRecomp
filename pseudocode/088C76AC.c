/* Entry 0x088C76AC | file offset 0x000C4684 | FUN_088c76ac | bytes 212 */

void FUN_088c76ac(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *param_3;
  uVar3 = param_3[1];
  iVar6 = 0;
  iVar2 = 0;
  if (0 < *(int *)(DAT_089d7740 + 8)) {
    iVar5 = 0;
    do {
      iVar7 = DAT_089d7744 + iVar5;
      bVar1 = false;
      if (((*(short *)(iVar7 + 2) <= iVar4) && (bVar1 = false, iVar4 <= *(short *)(iVar7 + 4))) &&
         (bVar1 = false, ((uint)*(byte *)(iVar7 + 0x12) & 1 << (uVar3 & 0x1f)) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        if (param_2 <= iVar2) {
          return;
        }
        *param_1 = iVar7;
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar6 < *(int *)(DAT_089d7740 + 8));
  }
  return;
}

