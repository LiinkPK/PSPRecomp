/* Entry 0x089BC7D8 | file offset 0x001B97B0 | FUN_089bc7d8 | bytes 208 */

short * FUN_089bc7d8(short *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_80 [112];
  
  if (param_1 == (short *)0x0) {
    return (short *)0x0;
  }
  iVar1 = FUN_089bb67c(param_1,1,param_2);
  if (iVar1 == 0) {
    *param_1 = *param_1 + 1;
  }
  else {
    FUN_089ba8f8(auStack_80);
    iVar1 = FUN_089bbd54(param_1,1,param_2,auStack_80);
    if (iVar1 == 0) {
      return (short *)0x0;
    }
    iVar1 = FUN_089bae80(auStack_80);
    if (iVar1 == 0) {
      return (short *)0x0;
    }
    param_1 = (short *)FUN_089bc670(param_1,1,param_2,auStack_80);
    FUN_089badf8(auStack_80);
  }
  return param_1;
}

