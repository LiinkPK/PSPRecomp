/* Entry 0x0888B70C | file offset 0x000886E4 | FUN_0888b70c | bytes 248 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888b70c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0885a4fc(DAT_089d4dc8);
  func_0x08b5341c(_DAT_08b54330);
  func_0x08abb4fc(_DAT_08abbdf8);
  func_0x08abb5bc(_DAT_08abbdf8);
  uVar1 = FUN_0881baa8();
  FUN_0881c010(uVar1);
  uVar1 = FUN_0881baa8();
  FUN_0881ba04(uVar1);
  func_0x08b0db40(_DAT_08b11e28);
  FUN_08889944(DAT_089d6a10,1);
  iVar2 = FUN_08889e44();
  if ((((iVar2 != 0) && (**(char **)(iVar2 + 0x5a4) == '\x1c')) &&
      (iVar2 = *(int *)(DAT_089d6ac8 + 0x710) + 8, *(int *)(DAT_089d6ac8 + 0x710) != 0)) &&
     ((iVar3 = FUN_08935970(iVar2,&DAT_089ca0c0), iVar3 == 0 ||
      (iVar2 = FUN_08935970(iVar2,&DAT_089ca0c4), iVar2 == 0)))) {
    uVar1 = FUN_0881baa8();
    FUN_0881ba2c(uVar1);
  }
  return;
}

