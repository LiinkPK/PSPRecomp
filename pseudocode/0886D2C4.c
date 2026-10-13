/* Entry 0x0886D2C4 | file offset 0x0006A29C | FUN_0886d2c4 | bytes 144 */

int FUN_0886d2c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_089d5f94 + 0x1c;
  do {
    if (*(int *)(iVar2 + 0xc) == 0) {
      FUN_0886dfc0(iVar2,param_1,param_2,param_3);
      return iVar2;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x13c;
  } while (iVar1 < 0xc0);
  return 0;
}

