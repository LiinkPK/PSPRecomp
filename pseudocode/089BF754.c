/* Entry 0x089BF754 | file offset 0x001BC72C | FUN_089bf754 | bytes 196 */

undefined4 FUN_089bf754(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [112];
  
  FUN_089ba8f8(auStack_90);
  iVar1 = FUN_089bf6a8(param_1,param_2,param_3,param_4,auStack_90);
  if ((iVar1 != 0) && (iVar1 = FUN_089bae80(auStack_90), iVar1 != 0)) {
    uVar2 = FUN_089bf330(param_1,param_2,param_3,param_4,auStack_90);
    FUN_089badf8(auStack_90);
    return uVar2;
  }
  return 0;
}

