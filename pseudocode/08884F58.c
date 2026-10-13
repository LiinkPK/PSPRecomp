/* Entry 0x08884F58 | file offset 0x00081F30 | FUN_08884f58 | bytes 64 */

bool FUN_08884f58(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 4) != 0) {
    bVar1 = (int)*(short *)(*(int *)(param_1 + 4) + 0xc) ==
            (uint)*(ushort *)(&DAT_089c9f8a + *(int *)(param_1 + 0x14) * 10);
  }
  return bVar1;
}

