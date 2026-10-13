/* Entry 0x08839050 | file offset 0x00036028 | FUN_08839050 | bytes 120 */

undefined4 FUN_08839050(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*DAT_089d85e8 == '\x01') {
    iVar2 = 0;
    do {
      iVar3 = DAT_09afb890;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x120);
      }
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar3;
    } while (*(int *)(iVar3 + 0x108) != param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

