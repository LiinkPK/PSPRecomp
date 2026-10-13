/* Entry 0x0888B0A4 | file offset 0x0008807C | FUN_0888b0a4 | bytes 252 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0888b0a4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_089d69f8;
  iVar5 = 0;
  iVar4 = DAT_089d69f8;
  do {
    if ((*(int *)(iVar4 + 0x18) != 0) &&
       (iVar2 = func_0x08adfe20(*(int *)(iVar4 + 0x18) + 0x2a8), iVar2 == 1)) {
      return 1;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 2);
  if ((*(int *)(DAT_089d6a10 + 0x48) == 3) && (*(int *)(_DAT_08a405e0 + 0x278) == 0)) {
    uVar3 = func_0x08a22970(_DAT_08a22ab0);
    uVar3 = func_0x08a074fc(uVar3);
    iVar4 = func_0x08a15a70(uVar3);
    if (iVar4 == 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 0x80) != 2) {
      return 0;
    }
  }
  return 1;
}

