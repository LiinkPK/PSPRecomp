/* Entry 0x089153B8 | file offset 0x00112390 | FUN_089153b8 | bytes 100 */

void FUN_089153b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x704);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
      *(undefined4 *)(param_1 + 0x704) = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 4);
  return;
}

