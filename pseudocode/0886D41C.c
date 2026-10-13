/* Entry 0x0886D41C | file offset 0x0006A3F4 | FUN_0886d41c | bytes 156 */

void FUN_0886d41c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_089d5f94 + param_1 * 0x1500 + 0xed1c;
  do {
    iVar1 = FUN_08935970(iVar2,param_2);
    if (iVar1 == 0) {
      FUN_08865710(iVar2);
      return;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (iVar3 < 0xc0);
  return;
}

