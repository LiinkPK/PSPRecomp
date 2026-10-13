/* Entry 0x088878B4 | file offset 0x0008488C | FUN_088878b4 | bytes 116 */

undefined4 FUN_088878b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) < 2) {
    iVar2 = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 4) = iVar2;
    uVar1 = 1;
    if (iVar2 == 1) {
      *(uint *)(DAT_089d726c + 0x30) = *(uint *)(DAT_089d726c + 0x30) | 0x1000;
    }
    else if (iVar2 == 2) {
      *(uint *)(DAT_089d726c + 0x30) = *(uint *)(DAT_089d726c + 0x30) | 0x2000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

