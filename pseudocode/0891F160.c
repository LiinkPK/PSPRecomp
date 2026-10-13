/* Entry 0x0891F160 | file offset 0x0011C138 | FUN_0891f160 | bytes 240 */

void FUN_0891f160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_089d712c;
  FUN_08921220(param_1,DAT_089d712c + 0x3f698);
  iVar2 = iVar4 + 0x3f6a0;
  iVar3 = iVar4 + 0x3f7b8;
  iVar5 = 0;
  iVar1 = param_1 + 0x10;
  iVar4 = iVar4 + 0x3fbb8;
  do {
    FUN_08925360(iVar1,iVar2);
    iVar5 = iVar5 + 1;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + 4;
  } while (iVar5 < 0x46);
  iVar2 = 0;
  iVar1 = param_1 + 0x240;
  do {
    FUN_08922e50(iVar1,iVar3);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x24;
    iVar3 = iVar3 + 0x20;
  } while (iVar2 < 0x20);
  iVar1 = 0;
  param_1 = param_1 + 0x6c0;
  do {
    FUN_08920700(param_1,iVar4);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x14;
    iVar4 = iVar4 + 4;
  } while (iVar1 < 5);
  return;
}

