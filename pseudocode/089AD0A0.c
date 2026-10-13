/* Entry 0x089AD0A0 | file offset 0x001AA078 | FUN_089ad0a0 | bytes 100 */

undefined4 FUN_089ad0a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [112];
  
  FUN_089ab7a0(auStack_80);
  FUN_089acec0(param_1,auStack_80);
  iVar1 = FUN_089abd28(auStack_80);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_089ad080(param_1,auStack_80);
    FUN_089abca0(auStack_80);
  }
  return uVar2;
}

