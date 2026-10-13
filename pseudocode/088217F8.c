/* Entry 0x088217F8 | file offset 0x0001E7D0 | FUN_088217f8 | bytes 108 */

void FUN_088217f8(int param_1)

{
  if ((*(ushort *)(*(int *)(*(int *)(param_1 + 4) + 0x564) + 10) & 1) != 0) {
    FUN_08821864(param_1,param_1 + 0x10);
    FUN_08834df4((float)(int)*(char *)(param_1 + 0x11) / 100.0,*(undefined4 *)(param_1 + 4));
  }
  return;
}

