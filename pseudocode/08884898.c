/* Entry 0x08884898 | file offset 0x00081870 | FUN_08884898 | bytes 136 */

void FUN_08884898(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    if (param_2 == '\0') {
      FUN_088d9f5c(iVar1,*(undefined2 *)(&DAT_089c9f74 + *(int *)(param_1 + 0x18) * 0xc),1);
      *(undefined2 *)(*(int *)(param_1 + 0xc) + 0xe) = 0xffff;
    }
    else {
      FUN_088d9f5c(iVar1,0xffffffff,1);
    }
  }
  return;
}

