/* Entry 0x089018EC | file offset 0x000FE8C4 | FUN_089018ec | bytes 252 */

void FUN_089018ec(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  
  iVar1 = FUN_088b36fc(param_3);
  iVar2 = 0;
  if ((iVar1 != 0) && (uVar3 = 0, 0 < *(short *)(iVar1 + 6))) {
    iVar4 = 0;
    do {
      psVar5 = (short *)(*(int *)(iVar1 + 0x1c) + iVar4);
      uVar6 = (uint)psVar5[1];
      if (((uVar6 == 0xffffffff) ||
          ((*(uint *)(DAT_089d726c + (uVar6 >> 5) * 4) & 1 << (uVar6 & 0x1f)) != 0)) &&
         ((1 << (uVar3 & 0x1f) & param_4) == 0)) {
        if (param_2 <= iVar2) {
          return;
        }
        iVar2 = iVar2 + 1;
        *param_1 = (int)*psVar5;
        param_1 = param_1 + 1;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)uVar3 < (int)*(short *)(iVar1 + 6));
  }
  return;
}

