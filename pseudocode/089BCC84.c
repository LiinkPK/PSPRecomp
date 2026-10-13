/* Entry 0x089BCC84 | file offset 0x001B9C5C | FUN_089bcc84 | bytes 148 */

undefined4 FUN_089bcc84(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [112];
  
  FUN_089ba8f8(auStack_80);
  iVar1 = FUN_089bc984(param_1,param_2,auStack_80);
  if ((iVar1 != 0) && (iVar1 = FUN_089bae80(auStack_80), iVar1 != 0)) {
    uVar2 = FUN_089bcac4(param_1,param_2,auStack_80);
    FUN_089badf8(auStack_80);
    return uVar2;
  }
  return 0;
}

