/* Entry 0x0898F684 | file offset 0x0018C65C | FUN_0898f684 | bytes 256 */

int FUN_0898f684(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  iVar1 = FUN_0898f624();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = local_10;
    if (-1 < *(short *)(param_1 + 0xa6)) {
      FUN_08973e20(*(undefined4 *)(DAT_09b6f478 + 0xa8),
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x3c) +
                             *(short *)(param_1 + 0xa6) * 4) + 0x10),(int)*(short *)(param_1 + 0xa8)
                   ,&local_10);
      iVar2 = local_10;
    }
  }
  iVar1 = FUN_0898f654(param_1);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0xa6) < 0) {
      iVar2 = iVar2 + local_10;
    }
    else {
      FUN_08973e20(*(undefined4 *)(DAT_09b6f478 + 0xa8),
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x3c) +
                             *(short *)(param_1 + 0xa6) * 4) + 0x10),(int)*(short *)(param_1 + 0xa8)
                   ,&local_10);
      iVar2 = iVar2 + local_10;
    }
  }
  return iVar2;
}

