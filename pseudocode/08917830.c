/* Entry 0x08917830 | file offset 0x00114808 | FUN_08917830 | bytes 316 */

void FUN_08917830(void)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_190 [368];
  
  uVar1 = DAT_089d8508;
  uVar6 = 0xffffffff;
  if (*(char *)(DAT_089d83d8 + 0x7db) != '\0') {
    uVar6 = 1;
  }
  psVar2 = (short *)FUN_0891705c(0xffffffff);
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (*psVar2 < 1) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 1;
    psVar2 = psVar2 + 1;
  } while (iVar4 < 5);
  uVar3 = FUN_0891705c(0xffffffff);
  func_0x08b448a0(auStack_190,uVar3,iVar5,*(undefined4 *)(DAT_089d83d8 + 0x60),
                  *(undefined4 *)(DAT_089d83d8 + 100),*(undefined4 *)(DAT_089d83d8 + 0x768),uVar6,
                  DAT_089d83d8 + 0x574);
  FUN_0891b8c0(uVar1,auStack_190);
  FUN_0891b96c(uVar1,0,0);
  FUN_0888964c(DAT_089d6a10,1,0,3,0);
  FUN_08889ed4(0,FUN_08917bf4,0);
  FUN_08889ed4(1,FUN_08917c34,0);
  FUN_08889ed4(2,FUN_08917c70,0);
  FUN_08889808(DAT_089d6a10);
  return;
}

