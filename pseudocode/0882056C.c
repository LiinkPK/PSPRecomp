/* Entry 0x0882056C | file offset 0x0001D544 | FUN_0882056c | bytes 144 */

undefined4 FUN_0882056c(short *param_1,undefined4 param_2)

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
        FUN_08820a14(*(int *)(param_1 + 2) + iVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < param_1[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

