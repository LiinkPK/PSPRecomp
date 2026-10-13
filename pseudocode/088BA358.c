/* Entry 0x088BA358 | file offset 0x000B7330 | FUN_088ba358 | bytes 244 */

void FUN_088ba358(undefined4 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  puVar2 = &DAT_09b4e7c8;
  do {
    iVar4 = 0;
    do {
      uVar1 = FUN_088b7a88(param_1,iVar3,iVar4);
      FUN_088b7d94(puVar2,iVar4,uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc);
    iVar4 = 0;
    do {
      iVar5 = 0;
      do {
        uVar1 = FUN_088b7ab8(param_1,iVar3,iVar4,iVar5);
        FUN_088b7da4(puVar2,iVar4,iVar5,uVar1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x1e;
  } while (iVar3 < 3);
  DAT_089d7370 = 1;
  return;
}

