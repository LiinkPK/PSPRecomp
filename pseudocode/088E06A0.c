/* Entry 0x088E06A0 | file offset 0x000DD678 | FUN_088e06a0 | bytes 116 */

void FUN_088e06a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(short *)(param_1 + 0x17ac)) {
    do {
      if (*(int *)(iVar1 + 0x170c) != 0) {
        FUN_0885c538(*(undefined4 *)(param_1 + 4),*(int *)(iVar1 + 0x170c),0x40);
        *(undefined4 *)(iVar1 + 0x170c) = 0;
        *(undefined4 *)(iVar1 + 0x175c) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(short *)(param_1 + 0x17ac));
  }
  return;
}

