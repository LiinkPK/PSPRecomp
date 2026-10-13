/* Entry 0x089B0220 | file offset 0x001AD1F8 | FUN_089b0220 | bytes 208 */

short * FUN_089b0220(short *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_80 [112];
  
  if (param_1 == (short *)0x0) {
    return (short *)0x0;
  }
  iVar1 = FUN_089ad3c4(param_1,1,param_2);
  if (iVar1 == 0) {
    *param_1 = *param_1 + 1;
  }
  else {
    FUN_089ab7a0(auStack_80);
    iVar1 = FUN_089ae87c(param_1,1,param_2,auStack_80);
    if (iVar1 == 0) {
      return (short *)0x0;
    }
    iVar1 = FUN_089abd28(auStack_80);
    if (iVar1 == 0) {
      return (short *)0x0;
    }
    param_1 = (short *)FUN_089b00b8(param_1,1,param_2,auStack_80);
    FUN_089abca0(auStack_80);
  }
  return param_1;
}

