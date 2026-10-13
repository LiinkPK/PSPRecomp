/* Entry 0x0886D354 | file offset 0x0006A32C | FUN_0886d354 | bytes 200 */

void FUN_0886d354(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10 [2];
  
  local_10[0] = 4;
  local_10[1] = 0xb;
  iVar2 = 0;
  iVar1 = DAT_089d5f94 + param_1 * 0x1500 + 0xed1c;
  do {
    if (*(char *)(iVar1 + 0x1a) == '\0') {
      FUN_088654d4(iVar1,param_2,local_10[param_1],param_3,param_4);
      return;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x1c;
  } while (iVar2 < 0xc0);
  return;
}

