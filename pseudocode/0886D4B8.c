/* Entry 0x0886D4B8 | file offset 0x0006A490 | FUN_0886d4b8 | bytes 152 */

int FUN_0886d4b8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = DAT_089d5f94 + param_1 * 0x1500 + 0xed1c;
  do {
    iVar1 = FUN_08935970(iVar2,param_2);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (iVar3 < 0xc0);
  return 0;
}

