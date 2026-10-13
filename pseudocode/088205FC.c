/* Entry 0x088205FC | file offset 0x0001D5D4 | FUN_088205fc | bytes 144 */

undefined4 FUN_088205fc(short *param_1,undefined4 param_2)

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
        FUN_08820a78(*(int *)(param_1 + 2) + iVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < param_1[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

