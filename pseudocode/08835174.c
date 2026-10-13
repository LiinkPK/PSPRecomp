/* Entry 0x08835174 | file offset 0x0003214C | FUN_08835174 | bytes 136 */

void FUN_08835174(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  
  if (param_3 == 0xffffffff) {
    FUN_088350ac(param_1,param_2,0);
  }
  else {
    pbVar1 = (byte *)0x0;
    do {
      pbVar1 = (byte *)FUN_088350ac(param_1,param_2,pbVar1);
      if (pbVar1 == (byte *)0x0) {
        return;
      }
    } while (*pbVar1 != param_3);
  }
  return;
}

