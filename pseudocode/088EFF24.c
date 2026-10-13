/* Entry 0x088EFF24 | file offset 0x000ECEFC | FUN_088eff24 | bytes 116 */

void FUN_088eff24(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_089d712c;
  iVar3 = DAT_089d712c + 0x1de90;
  uVar1 = FUN_088f0ce4();
  FUN_088f0150(iVar3,uVar1);
  iVar3 = 1;
  iVar2 = iVar2 + 0x1de91;
  do {
    FUN_088f0150(iVar2,0);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 7);
  return;
}

