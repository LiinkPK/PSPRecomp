/* Entry 0x088D9DDC | file offset 0x000D6DB4 | FUN_088d9ddc | bytes 108 */

void FUN_088d9ddc(int param_1)

{
  if (((*(char *)(param_1 + 0x28) == -0x80) && (*(char *)(param_1 + 0x29) == -0x80)) &&
     (*(char *)(param_1 + 0x2a) == -0x80)) {
    if (*(char *)(param_1 + 0x2b) == -1) {
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x200;
      goto LAB_088d9e34;
    }
  }
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfdff;
LAB_088d9e34:
  FUN_088d9d24();
  return;
}

