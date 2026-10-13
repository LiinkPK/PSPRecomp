/* Entry 0x0891F250 | file offset 0x0011C228 | FUN_0891f250 | bytes 232 */

void FUN_0891f250(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_089d712c;
  FUN_08921234(param_1,DAT_089d712c + 0x3f698);
  iVar2 = 0;
  iVar4 = param_1 + 0x10;
  iVar3 = iVar1 + 0x3f6a0;
  do {
    FUN_0892536c(iVar4,iVar3);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 8;
    iVar3 = iVar3 + 4;
  } while (iVar2 < 0x46);
  iVar2 = 0;
  iVar4 = param_1 + 0x240;
  iVar3 = iVar1 + 0x3f7b8;
  do {
    FUN_08922ea4(iVar4,iVar3);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x24;
    iVar3 = iVar3 + 0x20;
  } while (iVar2 < 0x20);
  param_1 = param_1 + 0x6c0;
  iVar2 = 0;
  iVar1 = iVar1 + 0x3fbb8;
  do {
    FUN_0892070c(param_1,iVar1);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x14;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 5);
  return;
}

