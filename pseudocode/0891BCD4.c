/* Entry 0x0891BCD4 | file offset 0x00118CAC | FUN_0891bcd4 | bytes 196 */

int FUN_0891bcd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x2a44) & 8) == 0) {
    iVar1 = FUN_0891c158(param_1,(int)*(char *)(param_1 + 0x2a20),(int)*(char *)(param_1 + 0x2a21));
    if ((iVar1 == 0) && ((*(uint *)(param_1 + 0x2a44) & 4) != 0)) {
      uVar2 = FUN_0891a44c(param_1 + 0x27e0);
      iVar1 = FUN_0891c1a4(param_1,uVar2);
      if (iVar1 == 0) {
        iVar1 = FUN_0891c1fc(param_1,0);
      }
      if (iVar1 == 0) {
        FUN_0891c330(param_1);
        iVar1 = 1;
      }
    }
  }
  else {
    FUN_08889cdc(DAT_089d6a10);
    iVar1 = 1;
  }
  return iVar1;
}

