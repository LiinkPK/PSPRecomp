/* Entry 0x0888A9A8 | file offset 0x00087980 | FUN_0888a9a8 | bytes 208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888a9a8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_089d8140;
  iVar2 = FUN_08900a40(DAT_089d8140);
  if (iVar2 == 1) {
    FUN_0888b8fc(DAT_089d6a14,0);
    FUN_0888b970(DAT_089d6a14);
  }
  else {
    FUN_08933c00(DAT_089d85e8);
    iVar2 = FUN_08900e9c(uVar1);
    if (iVar2 == 1) {
      func_0x089e7df0(_DAT_089e9d38,4,0);
    }
    else if (DAT_089d5f20 == '\x01') {
      func_0x089e7df0(_DAT_089e9d38,2,0);
    }
    else {
      func_0x089e7df0(_DAT_089e9d38,1,0);
    }
  }
  return;
}

