/* Entry 0x0886C9AC | file offset 0x00069984 | FUN_0886c9ac | bytes 172 */

void FUN_0886c9ac(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  param_1 = param_1 + param_2 * 4;
  puVar4 = *(uint **)(param_1 + 0x94);
  uVar3 = 0;
  uVar2 = *(uint *)(param_1 + 0x9c) >> 2;
  if (uVar2 != 0) {
    do {
      uVar1 = *puVar4;
      if ((uVar1 & 0xff000000) == 0xa000000) {
        if ((1 < (int)uVar3) && (puVar4[-2] != 0x30000)) {
          *puVar4 = uVar1 & 0xffffff;
        }
      }
      else if (((0 < (int)uVar3) && ((uVar1 & 0xff000000) == 0)) &&
              ((puVar4[-1] & 0xff000000) == 0x10000000)) {
        *puVar4 = uVar1 | 0xa000000;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

