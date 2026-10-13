/* Entry 0x0891C330 | file offset 0x00119308 | FUN_0891c330 | bytes 196 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0891c330(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 3);
  if ((bVar1 & 2) == 0) {
    FUN_0891c690();
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x279c);
    uVar4 = *(undefined4 *)(DAT_089d6a10 + 0x54);
    iVar3 = *(int *)(DAT_089d6a10 + 0x4c);
    FUN_08933c00(DAT_089d85e8);
    *(code **)(_DAT_08b54c38 + 0x140) = FUN_0891c750;
    *(undefined4 *)(_DAT_08b54c38 + 0x144) = 0;
    func_0x08b54184(_DAT_08b54c38,uVar4,(bVar1 & 4) != 0,uVar2 & 1,iVar3 == 5);
  }
  return;
}

