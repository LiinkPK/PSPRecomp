/* Entry 0x0899305C | file offset 0x00190034 | FUN_0899305c | bytes 108 */

void FUN_0899305c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(PTR_DAT_089d88e4 + 0xc);
  uVar1 = FUN_08992fc0(1);
  uVar2 = FUN_08992fc0(param_1);
  FUN_0899b654(uVar3,"%s: %s\n",uVar1,uVar2);
  return;
}

