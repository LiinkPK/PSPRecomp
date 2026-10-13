/* Entry 0x088CC77C | file offset 0x000C9754 | FUN_088cc77c | bytes 164 */

void FUN_088cc77c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088b29d8(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) && (*(short *)(iVar1 + 4) != -1)) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0887b944();
      FUN_0887ba5c(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = FUN_0887ad78(*(int *)(param_1 + 4),0,(int)*(short *)(iVar1 + 4),0,0,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 != 0) {
        FUN_0887b924();
      }
    }
  }
  return;
}

