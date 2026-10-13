/* Entry 0x088E5B58 | file offset 0x000E2B30 | FUN_088e5b58 | bytes 140 */

void FUN_088e5b58(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*DAT_089d85e8 == '\x01') {
    func_0x08ad0a94();
  }
  iVar2 = 0;
  do {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
      *param_1 = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 0x20);
  return;
}

