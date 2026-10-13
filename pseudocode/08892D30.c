/* Entry 0x08892D30 | file offset 0x0008FD08 | FUN_08892d30 | bytes 156 */

void FUN_08892d30(int param_1)

{
  FUN_089a3ebc(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x708) = 0xff808080;
  *(undefined1 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xff808080;
  FUN_089ad2d0(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc));
  (**(code **)(*(int *)(param_1 + 0x734) + 0xc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x734) + 8));
  FUN_088953f0(param_1);
  *(undefined1 *)(param_1 + 0x6b5) = 1;
  FUN_08892418(param_1);
  *(undefined4 *)(param_1 + 0x4d0) = 0xffffffff;
  return;
}

