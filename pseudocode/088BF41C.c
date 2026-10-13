/* Entry 0x088BF41C | file offset 0x000BC3F4 | FUN_088bf41c | bytes 176 */

void FUN_088bf41c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088bd564();
  FUN_088bd564(param_1 + 0x40);
  FUN_088b1f38(param_1 + 0x80);
  FUN_088b1f38(param_1 + 0x32c);
  if (*(int *)(param_1 + 0x5d8) != 0) {
    iVar2 = 0;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x5dc)) {
      do {
        FUN_088bd3c8(*(undefined4 *)(*(int *)(param_1 + 0x5d8) + iVar1 + 4),2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x5dc));
    }
    FUN_088bd99c(*(undefined4 *)(param_1 + 0x5e0));
    *(undefined4 *)(param_1 + 0x5e0) = 0;
    FUN_088bd99c(*(undefined4 *)(param_1 + 0x5d8));
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    *(undefined4 *)(param_1 + 0x5dc) = 0;
  }
  return;
}

