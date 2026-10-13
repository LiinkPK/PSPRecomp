/* Entry 0x0891F0BC | file offset 0x0011C094 | FUN_0891f0bc | bytes 156 */

void FUN_0891f0bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08920a28();
  iVar1 = 0;
  iVar2 = param_1 + 0x10;
  do {
    FUN_08924f94(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 8;
  } while (iVar1 < 0x46);
  iVar1 = 0;
  iVar2 = param_1 + 0x240;
  do {
    FUN_089228c4(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x24;
  } while (iVar1 < 0x20);
  iVar1 = 0;
  iVar2 = param_1 + 0x6c0;
  do {
    FUN_08920640(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x14;
  } while (iVar1 < 5);
  FUN_0891a3e4(param_1 + 0x738);
  return;
}

