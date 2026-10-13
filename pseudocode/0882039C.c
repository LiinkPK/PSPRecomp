/* Entry 0x0882039C | file offset 0x0001D374 | FUN_0882039c | bytes 132 */

undefined4 FUN_0882039c(short *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < param_1[1]) {
      do {
        FUN_08820750(*(int *)(param_1 + 2) + iVar2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < param_1[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

