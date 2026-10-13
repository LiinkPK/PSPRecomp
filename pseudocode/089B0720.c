/* Entry 0x089B0720 | file offset 0x001AD6F8 | FUN_089b0720 | bytes 148 */

undefined4 FUN_089b0720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [112];
  
  FUN_089ab7a0(auStack_80);
  iVar1 = FUN_089b02f0(param_1,param_2,auStack_80);
  if ((iVar1 != 0) && (iVar1 = FUN_089abd28(auStack_80), iVar1 != 0)) {
    uVar2 = FUN_089b04e0(param_1,param_2,auStack_80);
    FUN_089abca0(auStack_80);
    return uVar2;
  }
  return 0;
}

