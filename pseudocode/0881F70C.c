/* Entry 0x0881F70C | file offset 0x0001C6E4 | FUN_0881f70c | bytes 144 */

undefined4 FUN_0881f70c(undefined4 param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < param_2[1]) {
      do {
        FUN_0881faec(param_1,*(int *)(param_2 + 2) + iVar2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x44;
      } while (iVar3 < param_2[1]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

