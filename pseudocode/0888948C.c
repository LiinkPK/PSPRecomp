/* Entry 0x0888948C | file offset 0x00086464 | FUN_0888948c | bytes 448 */

void FUN_0888948c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined4 local_20 [2];
  undefined1 local_18 [4];
  
  iVar2 = DAT_089d6a10;
  puVar8 = local_20;
  iVar4 = *(int *)(DAT_089d6a10 + 0x48);
  if (((iVar4 == 3) || (iVar4 == 2)) || (iVar4 == 4)) {
    iVar5 = 0;
    iVar4 = DAT_089d6a10;
    do {
      piVar1 = (int *)(iVar4 + 0x38);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      *puVar8 = *(undefined4 *)(*piVar1 + 0x5a0);
      puVar8 = puVar8 + 1;
    } while (iVar5 < 2);
    if (*(int *)(DAT_089d6a10 + 0x4c) == 9) {
      iVar4 = *(int *)(DAT_089d6a10 + 0x7c8);
      if ((((*(uint *)(iVar4 + 0xbde8) & 2) != 0) && ('\0' < *(char *)(DAT_089d6a10 + 0x7c5))) &&
         (*(char *)(DAT_089d6a10 + 0x7c5) = *(char *)(DAT_089d6a10 + 0x7c5) + -1,
         *(char *)(iVar2 + 0x7c5) < '\x01')) {
        if (*(int *)(iVar2 + 0x804) != -1) {
          FUN_088a18b0(DAT_089d6c88,100,0);
          FUN_0889f234(DAT_089d6c30,*(undefined4 *)(iVar2 + 0x804));
          iVar4 = *(int *)(iVar2 + 0x7c8);
        }
        *(undefined1 *)(iVar2 + 0x7c5) = 0;
      }
      FUN_088ca9a8(iVar4,local_20);
    }
    else {
      uVar3 = FUN_0888b0a4();
      iVar4 = FUN_08889468(iVar2,*(undefined4 *)(iVar2 + 0x7b8));
      iVar5 = FUN_08889468(iVar2,*(undefined4 *)(iVar2 + 0x7bc));
      iVar6 = 0;
      do {
        uVar7 = 0;
        if ((iVar4 != iVar5) ||
           (*(char *)(iVar2 + iVar6 + 0x7c0) != *(char *)(iVar2 + iVar6 + 0x7c2))) {
          uVar7 = 1;
        }
        local_18[iVar6] = uVar7;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      FUN_088ca680(*(undefined4 *)(iVar2 + 0x7c8),local_20,local_18,
                   uVar3 != *(byte *)(iVar2 + 0x7c4));
      *(char *)(iVar2 + 0x7c4) = (char)uVar3;
    }
  }
  return;
}

