/* Entry 0x0888A434 | file offset 0x0008740C | FUN_0888a434 | bytes 272 */

void FUN_0888a434(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_790 [478];
  
  iVar6 = DAT_089d6a10;
  *(undefined1 *)(DAT_089d6a10 + 0x68) = 1;
  puVar5 = &DAT_09afb8a0;
  if (*(char *)(DAT_089d6a00 + 0x18) == '\0') {
    *(undefined4 *)(iVar6 + 0x50) = 2;
  }
  else {
    if (*(int *)(DAT_089d6a00 + 4) != 0) {
      *(undefined1 *)(iVar6 + 0x68) = 0;
    }
    *(undefined4 *)(iVar6 + 0x50) = 4;
    FUN_088876a8();
  }
  iVar6 = 0;
  puVar4 = &DAT_09afb8a0;
  do {
    iVar2 = 0;
    iVar1 = 0xef;
    do {
      uVar3 = ((undefined4 *)((int)puVar5 + iVar2))[1];
      *(undefined4 *)((int)local_790 + iVar2) = *(undefined4 *)((int)puVar5 + iVar2);
      *(undefined4 *)((int)local_790 + iVar2 + 4) = uVar3;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 8;
    } while (iVar1 != 0);
    FUN_088fad0c(local_790,iVar6,0);
    FUN_088f8e14(puVar4,local_790);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 0x418;
    puVar4 = puVar4 + 0x418;
  } while (iVar6 < 2);
  *(undefined4 *)(DAT_089d6a10 + 0x48) = 7;
  FUN_08889ed4(2,FUN_0888a3f8,0);
  return;
}

