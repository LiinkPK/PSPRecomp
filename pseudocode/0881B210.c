/* Entry 0x0881B210 | file offset 0x000181E8 | FUN_0881b210 | bytes 104 */

undefined4 FUN_0881b210(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined4 *)
         (*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 0xc) + iVar2) * 0x40 + 0xc) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    uVar1 = 0;
  }
  return uVar1;
}

