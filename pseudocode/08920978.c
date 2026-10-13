/* Entry 0x08920978 | file offset 0x0011D950 | FUN_08920978 | bytes 124 */

void FUN_08920978(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((0 < iVar1) && (iVar1 < 0x23)) {
      iVar1 = FUN_088cb164(DAT_089d712c + 0xf58,iVar1);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined2 *)(iVar1 + 6) = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 5);
  return;
}

