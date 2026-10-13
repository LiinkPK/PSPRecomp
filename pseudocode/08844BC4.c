/* Entry 0x08844BC4 | file offset 0x00041B9C | FUN_08844bc4 | bytes 80 */

bool FUN_08844bc4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088470b8();
  uVar2 = FUN_08844fa4(iVar1 + 0x24,&DAT_089c88a8);
  iVar1 = FUN_088fe7c8(uVar2,*(char *)(iVar1 + 9) != '\0');
  return 0 < iVar1;
}

