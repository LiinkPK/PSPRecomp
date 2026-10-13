/* Entry 0x0881F79C | file offset 0x0001C774 | FUN_0881f79c | bytes 144 */

undefined4 FUN_0881f79c(short *param_1,undefined1 param_2)

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
        FUN_0881fb68(*(int *)(param_1 + 2) + iVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x44;
      } while (iVar3 < param_1[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

