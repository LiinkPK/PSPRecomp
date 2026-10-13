/* Entry 0x0891406C | file offset 0x00111044 | FUN_0891406c | bytes 300 */

void FUN_0891406c(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (-1 < *(int *)(param_1 + 0x90)) {
    FUN_08835f60(0x3e32b8c2,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x90) * 4 + 0x704),
                 *(undefined4 *)(param_1 + 0x6d0));
    FUN_08835f60(0x3e32b8c2,*(undefined4 *)(param_1 + 0x6d0),
                 *(undefined4 *)(param_1 + *(int *)(param_1 + 0x90) * 4 + 0x704));
    if (*(float *)(param_1 + 0x6c) < 20.0) {
      bVar1 = true;
    }
  }
  if ((*(char *)(param_1 + 0x7d5) != '\0') && (!bVar1)) {
    FUN_088fe9cc();
    FUN_088e0ad8(*(undefined4 *)(param_1 + 0x744),*(undefined4 *)(param_1 + 0x74c),
                 *(undefined4 *)(param_1 + 0x754),*(undefined4 *)(param_1 + 0x748),0x40000,1);
    *(undefined1 *)(*(int *)(param_1 + 0x744) + 0x17bc) = 1;
    *(undefined1 *)(param_1 + 0x7d5) = 0;
    FUN_08864d98(0,0);
  }
  func_0x08b43a3c(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x6d0));
  return;
}

