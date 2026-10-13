/* Entry 0x088935CC | file offset 0x000905A4 | FUN_088935cc | bytes 324 */

void FUN_088935cc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_70 [80];
  
  iVar1 = DAT_089d6ac8;
  if (*(int *)(DAT_089d6ac8 + 0x74) != 0) {
    FUN_08866ba8(DAT_089d5ec0);
    FUN_089a25c0();
    iVar4 = *(int *)(iVar1 + 0x6bc);
    iVar3 = *(int *)(iVar1 + 0x6b8);
    if (0 < iVar4) {
      iVar5 = DAT_089d5ec0 + 0x7e0;
      iVar6 = DAT_089d5ec0 + 0x720;
      FUN_0885e860(iVar6);
      FUN_0889e7a0(auStack_70,iVar5,iVar6);
      FUN_08894b64(auStack_70,iVar3,1,iVar4);
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar6 = *(int *)(iVar1 + 0x74);
          iVar2 = *(int *)(iVar3 + 0x4c);
          if ((*(uint *)(*(int *)(iVar6 + 0x108) + iVar2 * 0xc + 8) & 0x20000) == 0) {
            if (*(int *)(iVar3 + 0x44) == 0) {
              FUN_0886bb44(iVar6,iVar2,1,0,0);
            }
            else {
              FUN_0886bb44(iVar6,iVar2,0,0,0);
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x50;
        } while (iVar5 < iVar4);
      }
    }
  }
  return;
}

